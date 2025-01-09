#include <bits/stdc++.h>

using namespace std;

long long sod(long long n)
{
    if (n < 10)
        return n * (n + 1) / 2;
    int d = (int)floor(log10(n));
    long long p = (long long)pow(10, d);
    long long msd = n / p;
    long long r = n % p;
    return msd * sod(p - 1) + (msd * (msd - 1) / 2) * p + msd * (r + 1) + sod(r);
}

int main()
{
    long long n;
    cin >> n;
    cout << sod(n);
}