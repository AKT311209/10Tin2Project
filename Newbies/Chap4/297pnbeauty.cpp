#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    long long countmax = -1;
    long long countsecondmax = -1;

    for (int i = 97; i <= 122; i++)
    {
        int count = 0;
        for (char c : s)
        {
            if (c == i)
            {
                count++;
            }
        }
        if (count > countmax)
        {
            countsecondmax = countmax;
            countmax = count;
        }
        else if (count > countsecondmax)
        {
            countsecondmax = count;
        }
    }

    cout << s.length() - countmax - countsecondmax;
}