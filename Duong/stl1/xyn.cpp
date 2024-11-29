#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("xyn.inp", "r")) {
        freopen("xyn.inp", "r", stdin);
        freopen("xyn.out", "w", stdout);
    }

    long long x, y;
    cin >> x >> y;
    long long value = gcd(x, y);
    long long count = 0;
    for (int i = 1; i * i <= value; i++) {
        if (value % i == 0) {
            count += 2;
            if (i * i == value) {
                count--;
            }
        }
    }
    cout << count;
}
