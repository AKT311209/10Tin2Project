
#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    if (fopen("cn.inp", "r"))
    {
        freopen("cn.inp", "r", stdin);
        freopen("cn.out", "w", stdout);
    }
    int N;
    cin >> N;
    vector<long long> A(N), B(N);
    for (int i = 0; i < N; i++)
        cin >> A[i];
    for (int i = 0; i < N; i++)
        cin >> B[i];

    vector<pair<long long, char>> V;
    V.reserve(2 * N);
    for (auto &x : A)
        V.push_back({x, 'A'});
    for (auto &x : B)
        V.push_back({x, 'B'});

    sort(V.begin(), V.end());
    long long unmatch = 0, ans = 1;
    for (auto &p : V)
    {
        if (p.second == 'A')
        {
            unmatch++;
        }
        else
        {
            ans = (ans * unmatch) % MOD;
            unmatch--;
        }
    }
    cout << ans % MOD << "\n";
    return 0;
}