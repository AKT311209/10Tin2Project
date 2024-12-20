#include <bits/stdc++.h>

using namespace std;

int main()
{
    if (fopen("cpair4.inp", "r"))
    {
        freopen("cpair4.inp", "r", stdin);
        freopen("cpair4.out", "w", stdout);
    }

    long long n;
    cin >> n;
    vector<long long> a(n);
    for (auto &x : a)
    {
        cin >> x;
    }

    unordered_map<long long, int> sum_map;
    long long count = 0;

    for (int k = 0; k < n; ++k)
    {
        for (int h = k + 1; h < n; ++h)
        {
            long long current_sum = a[k] + a[h];
            if (sum_map.find(current_sum) != sum_map.end())
            {
                count += sum_map[current_sum];
            }
        }
        for (int i = 0; i < k; ++i)
        {
            long long pair_sum = a[i] + a[k];
            sum_map[pair_sum]++;
        }
    }

    cout << count;
}