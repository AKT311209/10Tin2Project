#include <bits/stdc++.h>

using namespace std;

unordered_map<long long, long long> factors; // <num, product of prime factors>
unordered_map<long long, long long> group;

long long ppd(long long n)
{
    long long res = 1;
    for (long long i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            res *= i;
            while (n % i == 0)
                n /= i;
        }
    }
    if (n > 1)
        res *= n;
    return res;
}

void lucky(long long n)
{
    for (long long i = 1; i <= n; ++i)
        factors[i] = ppd(i);
}

void groupify(long long l, long long r)
{
    for (long long i = l; i <= r; ++i)
        if (group.find(factors[i]) == group.end())
            group[factors[i]] = 1;
        else
            group[factors[i]]++;
}

long long max()
{
    long long res = 0;
    for (auto [key, value] : group)
        res = max(res, value);
    return res;
}

int main()
{
    if (fopen("lucky.inp", "r"))
    {
        freopen("lucky.inp", "r", stdin);
        freopen("lucky.out", "w", stdout);
    }

    long long n, l, r;
    cin >> n >> l >> r;

    lucky(n);
    groupify(l, r);

    cout << max();
}