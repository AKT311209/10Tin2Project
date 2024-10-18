#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("csc.inp", "r")) {
        freopen("csc.inp", "r", stdin);
        freopen("csc.out", "w", stdout);
    }
    long long p, q, r;
    cin >> p >> q >> r;
    if (r - q == q - p) {
        cout << "Yes";
        } else {
        cout << "No";
    }
}