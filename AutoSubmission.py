"""
AutoSubmission module for submitting problems to an online judge.
"""
import os
import re
import shutil
import time
from tkinter import filedialog
from bs4 import BeautifulSoup
import requests


def select_files():
    """
    Open a file dialog to select files.
    """
    selected_files = filedialog.askopenfilenames()
    return selected_files


# Read variables
if not os.path.exists('cookie.txt') or not os.path.exists('csrfmiddlewaretoken.txt'):
    print("Please place two files 'cookie.txt' and 'csrfmiddlewaretoken.txt' in the same directory as this script")
    print("Press Enter to exit")
    input()
    exit()
with open('cookie.txt', encoding='utf-8') as f:
    cookie = f.read()
with open('csrfmiddlewaretoken.txt', encoding='utf-8') as f:
    csrfmiddlewaretoken = f.read()

# Check status


def check_status(html):
    soup = BeautifulSoup(html, 'html.parser')
    meta_tag = soup.find('meta', property='og:url')
    if meta_tag:
        preurl = meta_tag.get('content')
        url = preurl.replace("http:///accounts/login/?next=/",
                             "https://oj.codedream.edu.vn/")
        payload = {}
        headers = {
            'accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.7',
            'accept-language': 'en,vi;q=0.9',
            'cache-control': 'max-age=0',
            'cookie': cookie,
            'priority': 'u=0, i',
            'referer': 'https://oj.codedream.edu.vn/',
            'sec-ch-ua': '"Google Chrome";v="131", "Chromium";v="131", "Not_A Brand";v="24"',
            'sec-ch-ua-mobile': '?0',
            'sec-ch-ua-platform': '"Windows"',
            'sec-fetch-dest': 'document',
            'sec-fetch-mode': 'navigate',
            'sec-fetch-site': 'same-origin',
            'sec-fetch-user': '?1',
            'upgrade-insecure-requests': '1',
            'user-agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/131.0.0.0 Safari/537.36'
        }
        response = requests.request("GET", url, headers=headers, data=payload)
        soup1 = BeautifulSoup(response.text, 'html.parser')
        text_to_find = "Your submission is being processed..."
        if (soup1.find(string=text_to_find) is not None):
            while (soup1.find(string=text_to_find) is not None):
                time.sleep(0.5)
                response = requests.request(
                    "GET", url, headers=headers, data=payload)
                soup1 = BeautifulSoup(response.text, 'html.parser')
        try:
            time.sleep(0.5)
            response = requests.request("GET", url, headers=headers, data=payload)
            soup1 = BeautifulSoup(response.text, 'html.parser')
            overall_row = soup1.find('tr', id='overall-row')
            tds = overall_row.find_all('td')
            status = tds[1].find('span').text
            return status
        except:
            raise Exception("Error when reading status")
    else:
        raise Exception("Error when reading meta tag")


# Function to submit problem


def submit_problem(problem, source_code):
    url = "https://oj.codedream.edu.vn/problem/" + problem + "/submit"
    payload = {'csrfmiddlewaretoken': csrfmiddlewaretoken,
               'source': source_code,
               'language': '83',
               'judge': ''}
    files = []
    headers = {
        'accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.7',
        'accept-language': 'en,vi;q=0.9',
        'cache-control': 'max-age=0',
        'cookie': cookie,
        'origin': 'https://oj.codedream.edu.vn',
        'priority': 'u=0, i',
        'referer': 'https://oj.codedream.edu.vn/problem/pnarr4/submit',
        'sec-ch-ua': '"Google Chrome";v="131", "Chromium";v="131", "Not_A Brand";v="24"',
        'sec-ch-ua-mobile': '?0',
        'sec-ch-ua-platform': '"Windows"',
        'sec-fetch-dest': 'document',
        'sec-fetch-mode': 'navigate',
        'sec-fetch-site': 'same-origin',
        'sec-fetch-user': '?1',
        'upgrade-insecure-requests': '1',
        'user-agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/131.0.0.0 Safari/537.36',
        'Referer': 'https://oj.codedream.edu.vn/',
        'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/131.0.0.0 Safari/537.36',
        'Origin': 'https://oj.codedream.edu.vn'
    }
    response = requests.request(
        "POST", url, headers=headers, data=payload, files=files)
    if (response.status_code == 200):
        return response.text
    else:
        raise Exception("Error when submitting")

Submission_count = 0
AC_count = 0
not_AC = []
Unsuccessful_submission = []
Unsuccessful_check = {}

# Main function
if os.path.exists('Files'):
    shutil.rmtree('Files')
os.mkdir('Files')
for selected_file in select_files():
    shutil.copy(selected_file, 'Files')
for folder, subfolder, files in os.walk('Files'):
    for file in files:
        Submission_count += 1
        with open(os.path.join(folder, file), 'r') as f:
            content = f.read()
            pattern = r"\d*([a-zA-Z0-9]+)\.cpp"
            problemname = re.search(pattern, file).group(1)
            try:
                response = submit_problem(problemname, content)
            except Exception as e:
                if str(e) == "Error when submitting":
                    print(f"Error when submitting {problemname}")
                    Unsuccessful_submission.append(file)
                    continue
                else:
                    print(f"Unexpected error: {e}")
                    Unsuccessful_submission.append(file)
                    continue
            else:
                print(f"{problemname} has been submitted successfully!")
            try:
                status = check_status(response)
            except Exception as e:
                if str(e) == "Error when reading status":
                    print(f"Error when reading status of {problemname}")
                    Unsuccessful_check[problemname] = response
                    continue
                elif str(e) == "Error when reading meta tag":
                    Unsuccessful_submission.append(file)
                    continue
            else:
                print(f"Status of {problemname}: {status}")
                if status == "Accepted":
                    AC_count += 1
                else:
                    not_AC.append(problemname)
not_AC = set(not_AC)
print("Summary:")
print(f"AC submissions: {AC_count}/{Submission_count}")
print(f"Unknown submissions: {Submission_count - AC_count - len(not_AC)}")
print("Not AC submissions:")
for problem in not_AC:
    print(problem)
print("Unsuccessful submissions:")
for problem in Unsuccessful_submission:
    print(problem)
print("Unsuccessful check status:")
for problem in Unsuccessful_check.keys():
    print(problem)
if len(Unsuccessful_submission) != 0 or len(Unsuccessful_check) != 0:
    if len(Unsuccessful_submission) != 0:
        print("Do you want to resubmit the unsuccessful submissions?")
        resubmit = input("Enter 'y' to resubmit: ")
        if resubmit == 'y' or resubmit == 'Y':
            for problem in Unsuccessful_submission:
                with open(os.path.join("Files", f"{problem}"), 'r') as f:
                    content = f.read()
                    try:
                        response = submit_problem(problem, content)
                    except:
                        continue
                    else:
                        print(f"{problem} has been submitted successfully!")
                        Unsuccessful_submission.remove(problem)
                        try:
                            status = check_status(response)
                        except Exception as e:
                            if str(e) == "Error when reading status":
                                print(f"Error when reading status of {problem}")
                                Unsuccessful_check[problemname] = response
                                continue
                            elif str(e) == "Error when reading meta tag":
                                continue
                        else:
                            print(f"Status of {problem}: {status}")
                            if status == "Accepted":
                                AC_count += 1
                            else:
                                not_AC.append(problem)

    if len(Unsuccessful_check) != 0:
        print("Do you want to recheck status of submissions with unknown status?")
        recheck = input("Enter 'y' to recheck: ")
        if recheck == 'y' or recheck == 'Y':
            for problem in list(Unsuccessful_check.keys()):
                try:
                    status = check_status(Unsuccessful_check[problem])
                except Exception as e:
                    if str(e) == "Error when reading status":
                        print(f"Error when reading status of {problem}")
                        continue
                    elif str(e) == "Error when reading meta tag":
                        continue
                else:
                    Unsuccessful_check.pop(problem)
                    print(f"Status of {problem}: {status}")
                    if status == "Accepted":
                        AC_count += 1
                    else:
                        not_AC.append(problem)

    not_AC = set(not_AC)
    print("Summary:")
    print(f"AC submissions: {AC_count}/{Submission_count}")
    print(f"Unknown submissions: {Submission_count - AC_count - len(not_AC)}")
    print("Not AC submissions:")
    for problem in not_AC:
        print(problem)
    print("Unsuccessful submissions:")
    for problem in Unsuccessful_submission:
        print(problem)
    print("Unsuccessful check status:")
    for problem in Unsuccessful_check.keys():
        print(problem)

print("Execution completed!")
shutil.rmtree('Files')
print("Press Enter to exit")
input()
if os.path.exists('Files'):
    shutil.rmtree('Files')

