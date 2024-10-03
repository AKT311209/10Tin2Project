#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1e9 + 7;
int main()
{
    long long m, n;
    cin >> m >> n;
    long long sum = 0;
    for (long long i = 1; i <= m; i++)
    {
        for (long long j = 1; j <= n; j++)
        {
            if ((i + j) % 2 == 0)
                continue;
            sum += i * j;
            sum %= MOD;
        }
    }
    cout << sum;
}