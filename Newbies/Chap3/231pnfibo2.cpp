#include <bits/stdc++.h>

using namespace std;
long long mod = 1e9 + 7;
int main()
{
    long long n;
    cin >> n;
    long long f1 = 1, f2 = 1, temp, sum = 0;

    if (n == 1 || n == 2)
    {
        cout << 1;
    }
    else
    {
        for (long long i = 3; i <= n; i++)
        {
            temp = f2;
            f2 = ((f1 + f2) % mod + mod) % mod;
            f1 = temp;
            sum = ((sum + f2) % mod + mod) % mod;
        }
        cout << sum;
    }
}
