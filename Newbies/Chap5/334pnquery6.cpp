#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long m, n, q;
    cin >> m >> n >> q;
    long long a[m + 1][n + 1];

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < q; i++)
    {
        long long type;
        cin >> type;

        if (type==1) {
            long long x, y, u, v, k;
            cin >> x >> y >> u >> v >> k;
            for (int i = x; i <= u; i++)
            {
                for (int j = y; j <= v; j++)
                {
                    a[i][j] += k;
                }
            }
        } else {
            long long x, y, u, v;
            cin >> x >> y >> u >> v;
            long long max = LLONG_MIN;
            for (int i = x; i <= u; i++)
            {
                for (int j = y; j <= v; j++)
                {
                    if (a[i][j] > max)
                    {
                        max = a[i][j];
                    }
                }
            }
            cout << max << '\n';
        }
    }
}