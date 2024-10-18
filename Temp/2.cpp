#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("gcd.inp", "r")) {
        freopen("gcd.inp", "r", stdin);
        freopen("gcd.out", "w", stdout);
    }
    long long x, y;
    cin >> x >> y;
    long long des = min(x, y);
    long long p = 1;
    for (long long i = 1; i <= des; i++) {
        p *= i;
    } 
    cout << p;
}