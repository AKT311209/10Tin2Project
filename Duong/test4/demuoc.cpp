#include <bits/stdc++.h>

using namespace std;

bool checksquareroot(long long n)
{
    long long x = round(sqrt(n));
    return x * x == n;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    if (fopen("demuoc.inp", "r"))
    {
        freopen("demuoc.inp", "r", stdin);
        freopen("demuoc.out", "w", stdout);
    }
    long long rep;
    cin >> rep;
    long long even = 0;
    long long odd = 0;
    for (int i = 1; i <= rep; i++)
    {
        long long n;
        cin >> n;
        if (checksquareroot(n))
        {
            odd++;
        }
        else
        {
            even++;
        }
    }
    cout << even << '\n';
    cout << odd;
}