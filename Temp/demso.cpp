#include <bits/stdc++.h>

using namespace std;

int main()
{
    if (fopen("demso.inp", "r"))
    {
        freopen("demso.inp", "r", stdin);
        freopen("demso.out", "w", stdout);
    }
    long long n, m, k;
    cin >> n >> m >> k;
    long long num = m - n +1;
    long long kmul = (m / k) - ((n - 1) / k);
    cout << num - kmul;
}
