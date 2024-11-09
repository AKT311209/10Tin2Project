#include <bits/stdc++.h>

using namespace std;

vector<bool> sieve(int n)
{
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }
    return prime;
}

bool check(int n)
{
    string s = to_string(n);
    if (s.find('3') != string::npos || s.find('5') != string::npos || s.find('7') != string::npos)
    {
        return true;
    }
    return false;
}
int main()
{
    if (fopen("ntd.inp", "r"))
    {
        freopen("ntd.inp", "r", stdin);
        freopen("ntd.out", "w", stdout);
    }
    int n;
    cin >> n;
    vector<bool> prime = sieve(n);
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] && !check(i))
        {
            count++;
        }
    }
    cout << count;
    return 0;
}