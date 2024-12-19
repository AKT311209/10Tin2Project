#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    if (fopen("candy.inp", "r"))
    {
        freopen("candy.inp", "r", stdin);
        freopen("candy.out", "w", stdout);
    }

    long long n, k;
    cin >> n >> k;

    if (k == 1)
    {
        cout << 1;
        return 0;
    }
    else if (k == 2)
    {
        cout << (n - 1) / 2;
        return 0;
    }
    else if (k == 3)
    {
        long long res = 0;
        for (long long i = 1; i < n / 3; i++)
        {
            res += (n - i - 1) / 2 - i;
        }
        cout << res;
        return 0;
    }
    else if (k == 4)
    {
        long long res = 0;
        for (long long i = 1; i < n / 4; i++)
        {
            for (long long j = i + 1; j < (n - i) / 3; j++)
            {
                res += (n - i - j - 1) / 2 - j;
            }
        }
        cout << res;
        return 0;
    }
}