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

    long long res = 0;
    long long remain = m;
    for (auto x : a)
    {
        x.second += remain;
        res += (x.second / m) * (x.first);
        remain = x.second % m;
    }
    if (remain != 0)
        res += a[n - 1].first;

    cout << res * 2;
}