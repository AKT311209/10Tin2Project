#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long m, n;
    cin >> m >> n;
    long long a[m + 1][n + 1];
    long long diagionals = m + n - 1;
    long long diag1[diagionals + 1];
    long long diag2[diagionals + 1];
    for (long long i = 0; i <= diagionals; i++)
    {
        diag1[i] = 0;
        diag2[i] = 0;
    }

    for (long long i = 1; i <= m; i++)
    {
        for (long long j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            diag1[i + j - 1] += a[i][j];
            diag2[i - j + n] += a[i][j];
        }
    }

    long long max = LLONG_MIN;
    for (long long i = 1; i <= m; i++)
    {
        for (long long j = 1; j <= n; j++)
        {
            long long sum = diag1[i + j - 1] + diag2[i - j + n] - a[i][j];
            if (sum > max)
            {
                max = sum;
            }
        }
    }
    cout << max;
}