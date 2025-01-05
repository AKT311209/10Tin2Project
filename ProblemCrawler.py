""" This script is used to crawl problems code and generate .cpp files for each problem in selected directories.
"""
import os
from tkinter import filedialog
from bs4 import BeautifulSoup
import requests

if os.path.exists('cookie.txt') is False:
    print("Please create a file named cookie.txt in the same directory with the cookie of your account")
    input("Press Enter to exit")
    exit()
with open('cookie.txt', encoding='utf-8') as f:
    cookie = f.read()


def get_problem(num):
    """ 
     Get the problem code of the problem with the given number
    """
    if num is None:
        url = "https://oj.codedream.edu.vn/problems/"
    else:
        url = "https://oj.codedream.edu.vn/problems/"+str(num)

    payload = {}
    headers = {
        'accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.7',
        'accept-language': 'en,vi;q=0.9',
        'cache-control': 'no-cache',
        'cookie': cookie,
        'pragma': 'no-cache',
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
        'user-agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/131.0.0.0 Safari/537.36',
        'origin': 'https://oj.codedream.edu.vn'
    }
    response = requests.request(
        "GET", url, headers=headers, data=payload, timeout=3000)
    if response.status_code == 404:
        return "EOP"
    elif response.status_code != 200:
        return "ERR"
    soup = BeautifulSoup(response.text, 'html.parser')
    problem_codes = [td.get_text(strip=True)
                     for td in soup.find_all('td', class_='pcode')]
    return problem_codes


def main():
    """ 
     Main function
    """
    print("Please select a folder")
    folder = filedialog.askdirectory()
    os.chdir(folder)

    code_list = []
    i = 1
    while True:
        if get_problem(i) == "EOP":
            break
        elif get_problem(i) == "ERR":
            continue
        else:
            code_list += get_problem(i)
        i += 1
    enumerate(code_list)
    for i, code in enumerate(code_list):
        if os.path.exists(f"{i+1}{code}.cpp") is False:
            with open(f"{i+1}{code}.cpp", "w", encoding='utf-8'):
                pass
            print(f"Created {i+1}{code}.cpp")
        else:
            print(f"{i+1}{code}.cpp already exists")
    input("Press Enter to exit")


if __name__ == "__main__":
    main()
