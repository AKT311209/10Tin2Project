#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 10000001;
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
    if (fopen("trongcay.inp", "r"))
    {
        freopen("trongcay.inp", "r", stdin);
        freopen("trongcay.out", "w", stdout);
    }
    sieve();
    int repeats, n;
    vector<int> primenums;
    primenums.push_back(0);
    cin >> repeats;
    for (int i = 0; i < repeats; i++)
    {
        cin >> n;
        if (prime[n] == true)
        {
            primenums.push_back(n);
        }
    }
    if (primenums.size() == 1)
    {
        cout << -1;
        return 0;
    }
    sort(primenums.begin(), primenums.end());
    if ((primenums.size() + 1) % 2 == 0)
    {
        for (int i = 1; i <= primenums.size()-1; i+=2)
        {
            cout << primenums[i] << ' ';
        }
        for (int i = primenums.size()-1; i>=1;i -= 2)
        {
            if (i % 2 == 0)
                cout << primenums[i] << ' ';
        }
    }
    else
    {
        for (int i = 2; i <= (primenums.size() - 1); i+=2)
        {
            cout << primenums[i] << ' ';
        }
        for (int i = (primenums.size() - 1); i>=1; i -= 2)
        {
            if (i % 2 == 1)
                cout << primenums[i] << ' ';
        }
    }
    return 0;
}