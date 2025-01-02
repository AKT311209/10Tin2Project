#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long l, r;
    cin >> l >> r;

    long long sum = 0;

    for (long long i = 2; i <= 1e18; i *= 2) {
        sum += (r / i) - (l - 1) / i;
    }

    cout << sum;
}