#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 50001;
int prefix[50001];
bool prime[MAX_N];

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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if (fopen("qprofit.inp", "r"))
    {
        freopen("qprofit.inp", "r", stdin);
        freopen("qprofit.out", "w", stdout);
    }
    sieve();

    int nums, profit;
    cin >> nums;
    prefix[0] = 0;
    for (int i = 1; i <= nums; i++)
    {
        cin >> profit;
        if (prime[i] && profit > 0)
            profit = 0;
        prefix[i] = prefix[i - 1] + profit;
    }

    int queries, l, r;
    cin >> queries;
    for (int i = 0; i < queries; i++)
    {
        cin >> l >> r;
        cout << prefix[r] - prefix[l - 1] << '\n';
    }
}