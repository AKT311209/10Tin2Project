#include <bits/stdc++.h>

using namespace std;

int main()
{
    if (fopen("cpara.inp", "r"))
    {
        freopen("cpara.inp", "r", stdin);
        freopen("cpara.out", "w", stdout);
    }

    long long n;
    cin >> n;

    vector<pair<long long, long long>> array(n);
    for (auto &num : array)
    {
        cin >> num.first >> num.second;
    }

    unordered_map<string, long long> midpoint;
    for (long long i = 0; i < n; ++i)
    {
        for (long long j = i + 1; j < n; ++j)
        {
            long long x = array[i].first + array[j].first;
            long long y = array[i].second + array[j].second;
            string key = to_string(x) + "," + to_string(y);
            midpoint[key]++;
        }
    }

    long long res = 0;
    for (auto p : midpoint)
    {
        res += p.second * (p.second - 1) / 2;
    }

    cout << res;
}