#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("athorua.inp", "r")) {
        freopen("athorua.inp", "r", stdin);
        freopen("athorua.out", "w", stdout);
    }
    long long v, a1, b1, a2, b2;
    cin >> v >> a1 >> b1 >> a2 >> b2;

    long long dist1 = 0; long long dist2 = 0;
    while (dist1 < v && dist2 < v) {
        dist1 += a1;
        dist2 += a2;
        if (dist1 >= v && dist2 >= v) {
            cout << "HOA";
            return 0;
        } else if (dist1 >= v) {
            cout << "THO";
            return 0;
        } else if (dist2 >= v) {
            cout << "RUA";
            return 0;
        }
        dist1 -= b1;
        dist2 -= b2;
    }
}