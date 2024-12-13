#include <bits/stdc++.h>

using namespace std;

int main()
{
    if (fopen("findsub.inp", "r"))
    {
        freopen("findsub.inp", "r", stdin);
        freopen("findsub.out", "w", stdout);
    }

    long long n;
    cin >> n;
    vector<long long> prefix(n + 1, 0);
    unordered_map<long long, vector<long long>> freq;

    prefix[0] = 0;
    for (long long i = 1; i <= n; ++i)
    {
        long long temp;
        cin >> temp;
        prefix[i] = prefix[i - 1] + temp;
        freq[temp].push_back(i);
    }

    long long res = LLONG_MIN;
    for (auto [key, value] : freq)
    {
        if (value.size() == 1)
            continue;
        sort(value.begin(), value.end());
        for (long long i = 0; i < value.size(); ++i)
            for (long long j = i + 1; j < value.size(); ++j)
                res = max(res, prefix[value[j]] - prefix[value[i]-1]);
    }
    cout << res;
}