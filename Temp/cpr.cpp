#include <bits/stdc++.h>

using namespace std;

vector <long long> prefix;

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

int countprime(long long n, long long m)
{
    long long count = 0;
    for (long long i = n; i <= m; i++)
    {
        if (checkprime(i))
        {
            count++;
        }
    }
    return count;
}

int countdevisor(long long n)
{
    int count = 0;
    for (long long i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
            {
                count++;
            }
            else
            {
                count += 2;
            }
        }
    }
    return count;
}

long long square(long long a, long long b)
{
    long long left = ceil(sqrt(a));
    long long right = floor(sqrt(b));
    long long res = 0;
    for (long long i = left; i <= right; i++)
    {
        if (checkprime(countdevisor(i*i)))
            res++;
    }
    return res + countprime(a, b);
}

void prefixsum(long long n)
{
    prefix.push_back(0);
    for (long long i = 1; i <= n; i++)
    {
        prefix.push_back(prefix[i - 1] + square(i, i));
    }
}

int main()
{
    if (fopen("cpr.inp", "r"))
    {
        freopen("cpr.inp", "r", stdin);
        freopen("cpr.out", "w", stdout);
    }
    prefixsum(1000000);
    long long l;
    cin >> l;
    for (long long i = 0; i < l; i++)
    {
        long long m, n;
        cin >> m >> n;
        cout << prefix[n] - prefix[m - 1] << '\n';
    }
}
