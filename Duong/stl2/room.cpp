#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    if (fopen("room.inp", "r"))
    {
        freopen("room.inp", "r", stdin);
        freopen("room.out", "w", stdout);
    }
    int n;
    cin >> n;

    vector<pair<int, int>> queries(n);
    for (auto &q : queries)
        cin >> q.first >> q.second;
        
    sort(queries.begin(), queries.end(), [](pair<int, int> a, pair<int, int> b)
         {
        if(a.second != b.second) return a.second < b.second;
        return a.first < b.first; });

    vector<long long> dp(n, 0);
    dp[0] = queries[0].second - queries[0].first;
    for (int i = 1; i < n; i++)
    {
        long long length = queries[i].second - queries[i].first;
        int j = i - 1;
        while (j >= 0 && queries[j].second > queries[i].first)
            j--;
        dp[i] = max(dp[i - 1], length + (j >= 0 ? dp[j] : 0));
    }
    cout << dp[n - 1];
}