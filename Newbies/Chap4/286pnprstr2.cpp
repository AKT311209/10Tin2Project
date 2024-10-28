#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    s = " " + s;

    for (size_t i = 1; i < s.size(); i++)
    {
        for (size_t j = 1; j <= s.size() - i; j++)
        {
            cout << s.substr(i, j) << '\n';
        }
    }
}