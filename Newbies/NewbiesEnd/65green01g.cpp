#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000000;
long long diffA[MAXN + 2], diffB[MAXN + 2];
long long A[MAXN + 2], B[MAXN + 2], arrVal[MAXN + 2], p[MAXN + 2];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, q;
    cin >> n >> q;

    vector<array<long long, 3>> queries;
    queries.reserve(q);

    for (int i = 0; i < q; i++)
    {
        long long t, x, y = 0;
        cin >> t;
        if (t == 1)
        {
            cin >> x;
            if (x <= n)
            {
                diffA[x] += 1;
                diffA[n + 1] -= 1;
                diffB[x] += (1 - x);
                diffB[n + 1] -= (1 - x);
            }
        }
        else
        {
            cin >> x >> y;
            queries.push_back({2, x, y});
        }
    }

    for (int i = 1; i <= n; i++)
    {
        A[i] = A[i - 1] + diffA[i];
        B[i] = B[i - 1] + diffB[i];
    }

    for (int i = 1; i <= n; i++)
    {
        arrVal[i] = i * A[i] + B[i];
    }

    for (int i = 1; i <= n; i++)
    {
        p[i] = p[i - 1] + arrVal[i];
    }

    for (auto &qr : queries)
    {
        long long x = qr[1], y = qr[2];
        if (x < 1)
            x = 1;
        if (y > n)
            y = n;
        if (x > y)
        {
            cout << 0 << "\n";
            continue;
        }
        long long ans = p[y] - p[x - 1];
        cout << ans << "\n";
    }

    return 0;
}