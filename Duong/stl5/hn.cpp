#include <bits/stdc++.h>

using namespace std;

long long sumsq(long long n)
{
    long long res = 0;
    while (n)
    {
        res += (n % 10) * (n % 10);
        n /= 10;
    }
    return res;
}

int main()
{
    if (fopen("hn.inp", "r"))
    {
        freopen("hn.inp", "r", stdin);
        freopen("hn.out", "w", stdout);
    }

    long long query;
    cin >> query;

    for (long long i = 1; i <= query; i++)
    {
        unordered_set<long long> s;
        long long n;
        cin >> n;
        while (n != 1 && s.find(n) == s.end())
        {
            s.insert(n);
            n = sumsq(n);
        }
        if (n == 1)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
}