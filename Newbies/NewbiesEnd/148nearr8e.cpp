#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long m, n;
    cin >> m >> n;

    long long a[m + 1][n + 1];
    long long num = 0;
    for (long long i = 1; i <= m / 2; i++)
    {
        for (long long j = 1; j <= n; j++)
        {
            num++;
            a[i][j] = num;
        }
        for (long long j = 1; j <= n; j++)
        {
            num++;
            a[m + 1 - i][j] = num;
        }
    }
    if (m % 2)
    {
        for (long long j = 1; j <= n; j++)
        {
            num++;
            a[m / 2 + 1][j] = num;
        }
    }

    for (long long i = 1; i <= m; i++)
    {
        for (long long j = 1; j <= n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}