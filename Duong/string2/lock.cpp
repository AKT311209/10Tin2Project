#include <bits/stdc++.h>

using namespace std;

int main()
{
    if (fopen("lock.inp", "r"))
    {
        freopen("lock.inp", "r", stdin);
        freopen("lock.out", "w", stdout);
    }
    int n;
    cin >> n;
    string s;
    cin >> s;

    int count = 0;
    for (int i = '0'; i <= '9'; i++)
    {
        if (s.find(i) != string::npos)
        {
            count++;
        }
    }
    if (count < 5)
    {
        cout << 0;
        return 0;
    }

    for (size_t i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            cout << 0;
            return 0;
        }
    }

    cout << 1;
}