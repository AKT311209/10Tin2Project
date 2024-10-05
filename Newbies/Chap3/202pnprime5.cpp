#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long m, n, x;
    cin >> m >> n;
    for (long long i = 1; i <= n; i++)
    {
        cin >> x;
        int isprime = 1;
        if (x == 1 || x < 0)
        {
            isprime = 0;
        }
        for (long long j = 2; j * j <= x; j++)
        {
            if (x % j == 0)
            {
                isprime = 0;
                break;
            }
        }
        if (isprime == 1 && m%x == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}

