#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    if (fopen("cpairp.inp", "r"))
    {
        freopen("cpairp.inp", "r", stdin);
        freopen("cpairp.out", "w", stdout);
    }

    long long n, k;
    cin >> n >> k;

    vector<long long> array(n);
    for (auto &num : array)
        cin >> num;

    unordered_map<long long, long long> freq;
    for (auto num : array)
        freq[num]++;

    vector<long long> exp2(32, 1);
    for (long long i = 1; i <= 30; ++i)
        exp2[i] = exp2[i - 1] * 2;

    for (long long m = 1; m <= k; ++m)
    {
        if (m >= 31)
        {
            cout << 0 << '\n';
            continue;
        }
        long long target = exp2[m];
        long long count = 0;
        for (auto num : array)
        {
            if (freq.find(target - num) != freq.end())
                count += freq[target - num];
            if (target - num == num)
                count--;
        }
        cout << count / 2 << '\n';
    }
}