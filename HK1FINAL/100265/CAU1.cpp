#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    if (fopen("CAU1.inp", "r"))
    {
        freopen("CAU1.inp", "r", stdin);
        freopen("CAU1.out", "w", stdout);
    }
    long long n;
    cin >> n;
    long long res3 = -1, res5 = -1, res7 = -1;
    long long minfreq = LLONG_MAX;
    long long max7 = n / 7;
    for (long long count7 = max7; count7 >= max7 - 6 && count7 >= 0; count7--)
    {
        long long remain = n - 7 * count7;
        if (remain < 0)
            continue;
        long long count5 = remain / 5;
        for (; count5 >= count5 - 1 && count5 >= 0; count5--)
        {
            long long rem = remain - 5 * count5;
            if (rem % 3 == 0)
            {
                long long count3 = rem / 3;
                long long total = count3 + count5 + count7;
                if (total < minfreq || (total == minfreq && count7 > res7))
                {
                    minfreq = total;
                    res3 = count3;
                    res5 = count5;
                    res7 = count7;
                }
            }
        }
    }
    cout << res3 << " " << res5 << " " << res7;
}