#include <bits/stdc++.h>

using namespace std;

int main()
{
    if (fopen("postfix.inp", "r"))
    {
        freopen("postfix.inp", "r", stdin);
        freopen("postfix.out", "w", stdout);
    }

    string s;
    while (getline(cin, s))
    {

        stringstream ss(s);
        vector<string> input;
        string temp;
        while (ss >> temp)
        {
            input.push_back(temp);
        }

        stack<string> process;

        for (long long i = 0; i < input.size(); i++)
        {
            if (input[i] == "+" || input[i] == "-" || input[i] == "*")
            {
                string a = process.top();
                process.pop();
                string b = process.top();
                process.pop();

                if (input[i] == "+")
                {
                    process.push(to_string(stoi(a) + stoi(b)));
                }
                else if (input[i] == "-")
                {
                    process.push(to_string(stoi(b) - stoi(a)));
                }
                else if (input[i] == "*")
                {
                    process.push(to_string(stoi(a) * stoi(b)));
                }
            }
            else
            {
                process.push(input[i]);
            }
        }

        cout << process.top() << '\n';
    }
}
