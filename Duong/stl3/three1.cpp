#include <bits/stdc++.h>

using namespace std;

int main()
{
    if (fopen("three.inp", "r"))
    {
        freopen("three.inp", "r", stdin);
        freopen("three.out", "w", stdout);
    }

    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (auto &x : a)
        cin >> x;

    unordered_map<long long, long long> left_map;
    unordered_map<long long, long long> right_map;
    for (auto x : a)
        right_map[x]++;

    long long result = 0;
    for (auto aj : a)
    {
        right_map[aj]--;
        if (aj % k == 0)
        {
            long long ai = aj / k;
            long long ah = aj * k;
            if (left_map.find(ai) != left_map.end() && right_map.find(ah) != right_map.end())
            {
                result += left_map[ai] * right_map[ah];
            }
        }
        left_map[aj]++;
    }

    cout << result;
}