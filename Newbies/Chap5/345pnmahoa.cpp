#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long query;
    cin >> query;

    vector <string> a;

    for (int i = 1; i <= 26; i++) {
        a.push_back(string(1, char(i + 96)));
    }

    for (int i = 1; i <= 25; i++) {
        for (int j = i + 1; j <= 26; j++) {
            a.push_back(string(1, char(i + 96)) + string(1, char(j + 96)));
        }
    }

    for (int i = 1; i <= 24; i++) {
        for (int j = i + 1; j <= 25; j++) {
            for (int k = j + 1; k <= 26; k++) {
                a.push_back(string(1, char(i + 96)) + string(1, char(j + 96)) + string(1, char(k + 96)));
            }
        }
    }

    for (int i = 1; i <= 23; i++) {
        for (int j = i + 1; j <= 24; j++) {
            for (int k = j + 1; k <= 25; k++) {
                for (int l = k + 1; l <= 26; l++) {
                    a.push_back(string(1, char(i + 96)) + string(1, char(j + 96)) + string(1, char(k + 96)) + string(1, char(l + 96)));
                }
            }
        }
    }

    for (int i = 1; i <= 22; i++) {
        for (int j = i + 1; j <= 23; j++) {
            for (int k = j + 1; k <= 24; k++) {
                for (int l = k + 1; l <= 25; l++) {
                    for (int m = l + 1; m <= 26; m++) {
                        a.push_back(string(1, char(i + 96)) + string(1, char(j + 96)) + string(1, char(k + 96)) + string(1, char(l + 96)) + string(1, char(m + 96)));
                    }
                }
            }
        }
    }

    

    for (long long q = 1; q <= query; q++)
    {
        string s;
        cin >> s;
        bool check = true;
        for (size_t i = 0; i < s.size(); i++)
        {
            if (i != 0 && s[i] <= s[i - 1])
            {
                cout << 0 << '\n';
                check = false;
                break;
            }
        }
        if (!check)
        {
            continue;
        }
        cout << find(a.begin(), a.end(), s) - a.begin() + 1 << '\n';
    }
}