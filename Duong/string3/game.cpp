#include <bits/stdc++.h>

using namespace std;

bool comparenum(string s, string compare)
{
    // Remove leading zeros
    string result = "";
    bool leading0 = true;
    for (char c : s)
    {
        if (c != '0')
        {
            leading0 = false;
        }
        if (!leading0)
        {
            result += c;
        }
    }
    s = result;
    if (s.size() != compare.size())
    {
        return s.size() > compare.size();
    }
    return lexicographical_compare(compare.begin(), compare.end(), s.begin(), s.end());
}

int main()
{
    if (fopen("game.inp", "r"))
    {
        freopen("game.inp", "r", stdin);
        freopen("game.out", "w", stdout);
    }
    int repeats;
    cin >> repeats;
    for (int i = 0; i < repeats; i++) {
        string s;
        cin >> s;
        string compare = "0";
        string process = "";
        for (char c = '0'; c <= '9'; c++)
        {
            if (s.find(c) == string::npos)
            {
                continue;
            }
            for (char p : s)
            {
                if (p != c)
                {
                    process += p;
                }
            }
            if (comparenum(process, compare))
            {
                compare = process;
            }
            process = "";
        }

        // Remove leading zeros
        string result = "";
        bool leading0 = true;
        for (char c : compare)
        {
            if (c != '0')
            {
                leading0 = false;
            }
            if (!leading0)
            {
                result += c;
            }
        }
        if (result == "")
        {
            result = "0";
        }
        cout << result;
        cout << '\n';
    }
}