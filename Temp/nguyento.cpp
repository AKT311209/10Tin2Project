#include <bits/stdc++.h>

using namespace std;

bool prime[20000001];
vector<long long> primenums;
long long sumprimeton[20000001];

void sieve()
{
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for (long long i = 2; i <= 20000000; i++)
    {
        if (prime[i])
        {
            for (long long j = i * 2; j <= 20000000; j += i)
            {
                prime[j] = false;
            }
        }
    }
}

void primes()
{
    for (long long i = 2; i <= 20000000; i++)
    {
        if (prime[i])
        {
            primenums.push_back(i);
        }
    }
}
void sumprime()
{
    // Calculate sum of first n prime numbers
    long long sum = 0;
    for (long long i = 0; i < primenums.size(); i++)
    {
        sum += primenums[i];
        sumprimeton[i] = sum;
    }
}

int main()
{
    if (fopen("nguyento.inp", "r"))
    {
        freopen("nguyento.inp", "r", stdin);
        freopen("nguyento.out", "w", stdout);
    }
    sieve();
    long long n, x;
    cin >> n;
    primes();
    sumprime();
    for (long long i = 1; i <= n; i++)
    {
        cin >> x;
        cout << sumprimeton[x - 1] << '\n';
    }
}