#include <bits/stdc++.h>

using namespace std;

int main()
{
    if (fopen("trochoi.inp", "r"))
    {
        freopen("trochoi.inp", "r", stdin);
        freopen("trochoi.out", "w", stdout);
    }
    long long m, n;
    cin >> m >> n;
    long long a[m * n];
    for (long long i = 0; i < m * n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + m * n);
    long long i = 0;
    for (long long j = 0; j < m; j++)
    {
        if (j % 2 == 0)
        {
            for (long long k = 0; k < n; k++)
            {
                cout << a[n*j+k] << ' ';
                i++;
            }
        }
        else
        {
            for (long long k = 0; k < n; k++)
            {
                cout << a[n * (j+1) - k-1] << ' ';
                i++;
            }
        }
        cout << '\n';
    }
}