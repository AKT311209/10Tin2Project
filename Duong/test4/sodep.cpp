#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 1e6+1;
bool prime[MAX_N+4];
long long prefix[MAX_N+4];

void sieve()
{
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for (int p = 2; p * p < MAX_N; p++)
    {
        if (prime[p])
        {
            for (int i = p * p; i < MAX_N; i += p)
            {
                prime[i] = false;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    if (fopen("sodep.inp", "r"))
    {
        freopen("sodep.inp", "r", stdin);
        freopen("sodep.out", "w", stdout);
    }
    sieve();
    prefix[0] = 0;
    for (long long i = 1; i <= MAX_N; i++)
    {
        if ((i % 2) && prime[i] && prime[(i + 1) / 2])
        {
            prefix[i] = prefix[i - 1] + 1;
        }
        else
        {
            prefix[i] = prefix[i - 1];
        }
    }

    long long rep;
    cin >> rep;
    for (long long i = 1; i<=rep; i++) {
        long long l, r;
        cin >> l >> r;
        cout << prefix[r]-prefix[l-1] << '\n';
    }
    return 0;
}