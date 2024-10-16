#include <bits/stdc++.h>

using namespace std;

int main()
{
    if (fopen("demx.inp", "r"))
    {
        freopen("demx.inp", "r", stdin);
        freopen("demx.out", "w", stdout);
    }
    long long k, a, b;
    cin >> k >> a >> b;

    // find x >= a, x % k==0
    long long x = ceil((double)a / k) * k;

    // find y <= b, y % k ==0
    long long y = floor((double)b / k) * k;

    cout << (y - x) / k + 1;
}