#include <bits/stdc++.h>

using namespace std;

int main()
{
    if (fopen("minp.inp", "r"))
    {
        freopen("minp.inp", "r", stdin);
        freopen("minp.out", "w", stdout);
    }

    long long n, m;
    cin >> n >> m;

    vector<pair<long long, long long>> a(n);
    for (auto &x : a)
    {
        cin >> x.first >> x.second;
    }

    sort(a.begin(), a.end(), greater<pair<long long, long long>>());
    long long res = 0;
    long long cur = 0;
    for (auto x : a)
    {
        res += (x.second / m) * (x.first);
        x.second %= m;
        cur -= x.second;
        if (cur < 0)
        {
            res += x.first;
            cur += m;
        }
    }

    cout << res * 2;
}
