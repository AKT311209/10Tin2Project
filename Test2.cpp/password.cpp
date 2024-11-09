#include <bits/stdc++.h>

using namespace std;

bool prime[10000001];

void sieve()
{
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for (int p = 2; p * p < 10000001; p++)
    {
        if (prime[p])
        {
            for (int i = p * p; i < 10000001; i += p)
            {
                prime[i] = false;
            }
        }
    }
}

int sumDigit(int input)
{
    int sum = 0;
    while (input > 0)
    {
        sum += input % 10;
        input /= 10;
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    if (fopen("password.inp", "r"))
    {
        freopen("password.inp", "r", stdin);
        freopen("password.out", "w", stdout);
    }
    sieve();
    int l, r;
    cin >> l >> r;
    for (int i = l; i <= r; i++)
    {
        if (!prime[i])
            continue;
        if (prime[sumDigit(i)])
        {
            cout << i << ' ';
        }
    }
    return 0;
}