#include <bits/stdc++.h>

using namespace std;

long long mod = 1e9 + 7;
int main()
{
    long long x, n;
    cin >> x >> n;
    long long s = 0;
    long long pow = 1;
    for (int i = 1; i <= n; i++)
    {
        pow = pow * x % mod;
        if (i % 2 == 0)
        {
            s = (s - pow + mod) % mod; // Ensure non-negative result
        }
        else
        {
            s = (s + pow) % mod;
        }
    }
    cout << s;
    return 0;
}
