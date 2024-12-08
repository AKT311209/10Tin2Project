#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    if (fopen("suml.inp", "r"))
    {
        freopen("suml.inp", "r", stdin);
        freopen("suml.out", "w", stdout);
    }

    int n;
    cin >> n;

    vector<pair<long long, long long>> seg(n);
    for (int i = 0; i < n; i++)
    {
        long long xi, di;
        cin >> xi >> di;
        seg[i] = {xi, xi + di};
    }

    sort(seg.begin(), seg.end());
    long long total = 0;
    long long cur_start = seg[0].first;
    long long cur_end = seg[0].second;

    for (int i = 1; i < n; i++)
    {
        if (seg[i].first <= cur_end)
        {
            cur_end = max(cur_end, seg[i].second);
        }
        else
        {
            total += cur_end - cur_start;
            cur_start = seg[i].first;
            cur_end = seg[i].second;
        }
    }

    total += cur_end - cur_start;
    cout << total;
}