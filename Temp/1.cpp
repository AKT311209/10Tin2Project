#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("rab.inp", "r")) {
        freopen("rab.inp", "r", stdin);
        freopen("rab.out", "w", stdout);
    }
    long long x, y, a, b;
    cin >> x >> y >> a >> b;
    if ((y-x)%(a+b)==0) cout << (y-x)/(a+b);
    else cout << -1;
}