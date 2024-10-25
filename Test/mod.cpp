#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("mod.inp", "r"))
    {
        freopen("mod.inp", "r", stdin);
        freopen("mod.out", "w", stdout);
    }
    long long a, b, m;
    cin >> a >> b >> m;
    long long p = 1;
    for (long long i = a; i <= b; i++) {
        p *= i;
        p %= m;
    }
    cout << p;
}