#include <bits/stdc++.h>

using namespace std;

int main()
{
    if (fopen("banh.inp", "r"))
    {
        freopen("banh.inp", "r", stdin);
        freopen("banh.out", "w", stdout);
    }
    long long n, m, k;
    cin >> n >> m >> k;
    if (n < k) {
        cout << min(n*m, k*m*4/5);
    } else {
        cout << n*m*4/5;
    }
}
