#include <bits\stdc++.h>

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
    int repeats, n;
    vector<int> primenums;
    cin >> repeats;
    for (int i = 0; i < repeats; i++)
    {
        cin >> n;
        if (prime[n])
            primenums.push_back(n);
    }
    sort(primenums.begin(), primenums.end());
    int output[primenums.size() + 2];
    memset(output, 0, sizeof(output));
    int center = (primenums.size() + 1) / 2;
    int flag = 0;
    bool left = false;
    for (int i = 0; i < primenums.size();i++)
    {
        if (left = true)
        {
            output[center + flag] = i;
        }
        else
        {
            output[center - flag] = i;
        }
        left = !left;
        if (left) flag++;
    }
    for (int i = 0; i < primenums.size() + 2; i++) {
        if (output[i]!=0) {
            cout << output[i] << ' ';
        }
    }
}