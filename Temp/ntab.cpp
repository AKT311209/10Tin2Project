#include <bits/stdc++.h>

using namespace std;

bool checkprime(long long n)
{
    if (n < 2)
        return false;
    for (long long i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    if (fopen("ntab.inp", "r"))
    {
        freopen("ntab.inp", "r", stdin);
        freopen("ntab.out", "w", stdout);
    }
    long long n, m;
    cin >> n >> m;
    long long count = 0;
    for (long long i = n; i <= m; i++)
    {
        if (checkprime(i))
        {
            count++;
        }
    }
    cout << count;
}