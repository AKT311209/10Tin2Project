#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x;
    cin >> x;
    long long mina = LLONG_MAX, res = -1;
    for (long long d = 1; d * d <= x; ++d)
    {
        if (x % d == 0)
        {
            long long e = x / d;
            if ((e - d) % 2 == 0)
            {
                long long a = (e + d) / 2;
                long long b = (e - d) / 2;
                if (a < mina && b >= 0)
                {
                    mina = a;
                    res = b;
                }
            }
        }
    }
    if (res != -1)
    {
        cout << mina << " " << res << "\n";
    }
    else
    {
        cout << "-1\n";
    }
}