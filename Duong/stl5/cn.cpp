#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main()
{
    if (fopen("cn.inp", "r"))
    {
        freopen("cn.inp", "r", stdin);
        freopen("cn.out", "w", stdout);
    }
    int N;
    cin >> N;
    vector<long long> A(N), B(N);
    for (auto &x : A)
        cin >> x;
    for (auto &x : B)
        cin >> x;
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    vector<vector<long long>> dp(N + 1, vector<long long>(N + 1, 0));
    dp[0][0] = 1;
    for (int i = 1; i <= N; i++)
    {
        for (int j = i; j <= N; j++)
        {
            dp[i][j] = (dp[i][j - 1] + dp[i - 1][j - 1]) % MOD;
        }
    }
    cout << dp[N][N] << endl;
}