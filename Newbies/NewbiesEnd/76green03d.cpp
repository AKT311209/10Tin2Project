#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long m, n, q;
    cin >> m >> n >> q;

    long long a[m + 1][n + 1];
    long long sumrow[m + 1];
    long long sumcol[n + 1];
    memset(sumrow, 0, sizeof(sumrow));
    memset(sumcol, 0, sizeof(sumcol));
    for (long long i = 1; i <= m; i++)
    {
        for (long long j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            sumrow[i] += a[i][j];
            sumcol[j] += a[i][j];
        }
    }

    long long pref[m + 1][n + 1];
    for (long long i = 1; i <= m; i++)
    {
        for (long long j = 1; j <= n; j++)
        {
            pref[i][j] = sumrow[i] + sumcol[j] - a[i][j];
        }
    }
    long long res = LLONG_MIN;
    for (long long i = 1; i <= m; i++)
    {
        for (long long j = 1; j <= n; j++)
        {
            if (pref[i][j] > res)
            {
                res = pref[i][j];
            }
        }
    }

    while (q--)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            long long x, y, d;
            cin >> x >> y >> d;
            // Increase a[x][y] by d
            for (long long i = 1; i <= m; i++) pref[i][y] += d;
            for (long long j = 1; j <= n; j++) pref[x][j] += d;
            pref[x][y] -= d;

            long long curmax = LLONG_MIN;
            for (long long i = 1; i <= m; i++) curmax = max(curmax, pref[i][y]);
            for (long long i = 1; i <= n; i++) curmax = max(curmax, pref[x][i]);
            res = max(res, curmax);
        }
        else
        {
            cout << res << '\n';
        }
    }
}