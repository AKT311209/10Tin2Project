#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;

    long long a[n + 1][n + 1];

    long long num = 0;
    for (long long i = 1; i <= n; i++)
    {
        if (i%2) {
            for (long long j = 1; j <= i; j++)
            {
                a[i][j] = ++num;
            }
            for (long long j = i - 1; j >= 1; j--)
            {
                a[j][i] = ++num;
            }
        } else {
            for (long long j = 1; j <= i; j++)
            {
                a[j][i] = ++num;
            }
            for (long long j = i - 1; j >= 1; j--)
            {
                a[i][j] = ++num;
            }
        }
    }

    for (long long i = 1; i <= n; i++)
    {
        for (long long j = 1; j <= n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}