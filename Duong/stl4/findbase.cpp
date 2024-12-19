#include <bits/stdc++.h>

using namespace std;

unordered_map<long long, long long> base;

void prep()
{
    base[1] = 1;
    for (long long i = 2; i <= 1e6; i++)
    {
        long long j = i * i * i;
        while (1)
        {
            if (!base[j])
            {
                base[j] = i;
            }
            if (j > 1e18 / i)
            {
                break;
            }
            j *= i;
        }
    }
}

long long base2(long long n)
{
    if (round(sqrt(n)) * round(sqrt(n)) == n)
    {
        return round(sqrt(n));
    }
    return -1;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    if (fopen("findbase.inp", "r"))
    {
        freopen("findbase.inp", "r", stdin);
        freopen("findbase.out", "w", stdout);
    }
    prep();

    long long query;
    cin >> query;

    for (long long i = 0; i < query; i++)
    {
        long long n;
        cin >> n;
        if (base[n])
        {
            cout << base[n] << '\n';
        }
        else
        {
            long long res = base2(n);
            if (res != -1)
            {
                cout << res << '\n';
            }
        }
    }
    return 0;
}