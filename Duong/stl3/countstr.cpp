#include <bits/stdc++.h>

using namespace std;

int main()
{
    if (fopen("countstr.inp", "r"))
    {
        freopen("countstr.inp", "r", stdin);
        freopen("countstr.out", "w", stdout);
    }

    long long n, k;
    cin >> n >> k;

    vector<string> v;
    v.push_back(" ");

    for (long long i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    long long count = 0;
    for (long long i = 1; i <= n; i++)
    {
        for (long long j = i + 1; j <= i+k; j++)
        {
            if (v[i].length() == v[j].length())
                count++;
        }
    }

    cout << count;
}
