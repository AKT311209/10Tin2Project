#include <bits/stdc++.h>

using namespace std;

int main()
{
    if (fopen("frac.inp", "r"))
    {
        freopen("frac.inp", "r", stdin);
        freopen("frac.out", "w", stdout);
    }

    long long m, n, k;
    cin >> m >> n >> k;

    vector<long long> a(m);
    vector<long long> b(n);

    vector<pair<long long, long long>> arr;
    vector<pair<double, long long>> process;

    for (long long i = 0; i < m; i++)
    {
        cin >> a.at(i);
    }

    for (long long i = 0; i < n; i++)
    {
        cin >> b.at(i);
    }

    for (long long i = 0; i < m; i++)
    {
        for (long long j = 0; j < n; j++)
        {
            arr.push_back(make_pair(a.at(i), b.at(j)));
        }
    }

    for (auto &p : arr)
    {
        long long x = gcd(p.first, p.second);
        p.first /= x;
        p.second /= x;
    }

    sort(arr.begin(), arr.end(), [](pair<long long, long long> a, pair<long long, long long> b)
         { return a.first * b.second < a.second * b.first; });

    arr.erase(unique(arr.begin(), arr.end()), arr.end());

    cout << arr.at(k - 1).first << " " << arr.at(k - 1).second;
}
