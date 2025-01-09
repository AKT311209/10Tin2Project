#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (k == 2)
    {
        string s1, s2;
        s1.reserve(n);
        s2.reserve(n);
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                s1 += '1';
                s2 += '0';
            }
            else
            {
                s1 += '0';
                s2 += '1';
            }
        }

        long long cost1 = 0, cost2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != s1[i])
            {
                cost1++;
            }
            if (s[i] != s2[i])
            {
                cost2++;
            }
        }

        cout << min(cost1, cost2);
    }
    else
    {
        long long cost = 0;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
            {
                s[i] = 'p';
                cost++;
            }
        }
        cout << cost;
    }
}