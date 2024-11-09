#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, compstr;
    cin >> s;
    for (size_t i = 0; i < s.length(); i++)
    {
        int count = 1;
        while (i + 1 < s.length() && s[i] == s[i + 1])
        {
            count++;
            i++;
        }
        if (count != 1) compstr += to_string(count) + s[i];
        else compstr += s[i];
    }

    cout << compstr;
}