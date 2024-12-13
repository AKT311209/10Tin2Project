#include <bits/stdc++.h>

using namespace std;

int main()
{
    if (fopen("crect.inp", "r"))
    {
        freopen("crect.inp", "r", stdin);
        freopen("crect.out", "w", stdout);
    }

    long long n;
    cin >> n;

    unordered_map<long long, long long> freq;
    while (cin >> n)
    {
        freq[n]++;
    }

    long long count = 0;
    unordered_map<long long, long long> freq2;
    for (auto [key, value] : freq)
    {
        count += (value >= 4);
        if (value >= 2)
            freq2[key] = value;
    }

    count += freq2.size() * (freq2.size() - 1) / 2;
    cout << count;
}