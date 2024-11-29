#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    if (fopen("matkhau.inp", "r"))
    {
        freopen("matkhau.inp", "r", stdin);
        freopen("matkhau.out", "w", stdout);
    }

    string s;
    cin >> s;
    // Compress string
    string res;
    for (size_t i = (s.size()-1) / 2; i >= 1; i--)
    {
        string temp = s.substr(0, i);
        bool flag = true;
        for (size_t j = i; j <= s.size() + i; j += i)
        {
            string s1 = s.substr(j - i, i);
            if (s1.empty())
            {
                break;
            }
            if (temp != s1)
            {
                flag = false;
                break;
            }
        }
        if (!flag)
        {
            continue;
        }
        if (temp[0] > res[0])
            res = temp;
    }
    if (res.empty()) res = s;

    // Most frequent

    int maxcount = 0;
    for (char c = 'a'; c <= 'z'; c++)
    {
        int cnt = count(res.begin(), res.end(), c);
        maxcount = max(cnt, maxcount);
    }
    cout << maxcount;
}