#include <bits/stdc++.h>

using namespace std;

int main()
{
    if (fopen("stline.inp", "r"))
    {
        freopen("stline.inp", "r", stdin);
        freopen("stline.out", "w", stdout);
    }

    long long n;
    vector<pair<long long, long long>> arr;

    cin >> n;
    for (long long i = 0; i < n; i++)
    {
        long long x, y;
        cin >> x >> y;
        arr.push_back(make_pair(x, y));
    }
    int count = 0;
    int end = INT_MIN;
    sort(arr.begin(), arr.end(), [](pair<int, int> a, pair<int, int> b)
         { return a.second < b.second || (a.second == b.second && a.first < b.first); });

    for (auto interval : arr)
    {
        if (interval.first >= end)
        {
            count++;
            end = interval.second;
        }
    }
    cout << n - count;
}