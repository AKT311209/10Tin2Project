#include <bits/stdc++.h>
using namespace std;

bool prime[1000001];

void sieve()
{
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for (int i = 2; i <= 1000000; i++)
    {
        if (prime[i])
        {
            for (int j = i * 2; j <= 1000000; j += i)
            {
                prime[j] = false;
            }
        }
    }
}

bool check() {

}

int main()
{
    if (fopen("tich.inp", "r"))
    {
        freopen("tich.inp", "r", stdin);
        freopen("tich.out", "w", stdout);
    }
    long long n, x;
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        cin >> x;
    }
}