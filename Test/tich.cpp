#include <bits/stdc++.h>

using namespace std;
bool sieve[1000001];

void primeSieve()
{
    memset(sieve, true, sizeof(sieve));
    for (long long i = 2; i <= sqrt(1000000); i++)
    {
        if (sieve[i] == true)
        {
            for (long long j = i * i; j <= 1000000; j += i)
            {
                sieve[j] = false;
            }
        }
    }
}

int main()
{
    if (fopen("tich.inp", "r"))
    {
        freopen("tich.inp", "r", stdin);
        freopen("tich.out", "w", stdout);
    }
    primeSieve();
    long long repeat, test;
    cin >> repeat;
    for (long long i = 0; i < repeat; i++)
    {
        cin >> test;
        vector<long long> primes;
        for (long long k = 2; k <= 1000000; k++)
        {
            if (sieve[k])
                primes.push_back(k);
        }
        long long prev = -1;
        for (size_t j = 0; j + 2 < primes.size(); j++)
        {
            long long product = primes[j] * primes[j + 1] * primes[j + 2];
            if (product > test)
            {
                cout << prev << '\n';
                break;
            }
            prev = product;
        }
    }
}