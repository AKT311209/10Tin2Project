#include <bits/stdc++.h>

using namespace std;

bool checkspecial(long long a)
{
    long long temp = a;
    long long sumdigit = 0;
    while (a > 0)
    {
        sumdigit += a % 10;
        a /= 10;
    }
    return temp % sumdigit == 0;
}

int main()
{
    if (fopen("sdb.inp", "r"))
    {
        freopen("sdb.inp", "r", stdin);
        freopen("sdb.out", "w", stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    long long n, q;
    cin >> n >> q;

    vector<bool> isSpecial(n + 1, false);
    vector<long long> prefixSum(n + 1, 0);

    for (long long i = 1; i <= n; i++)
    {
        long long temp;
        cin >> temp;
        if (checkspecial(temp))
            isSpecial[i] = true;
        prefixSum[i] = prefixSum[i - 1] + isSpecial[i];
    }

    for (long long i = 0; i < q; i++)
    {
        long long l, r;
        cin >> l >> r;
        cout << prefixSum[r] - prefixSum[l - 1] << '\n';
    }
}
