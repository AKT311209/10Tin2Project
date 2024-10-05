#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, x;
    cin >> n;
    long long gcd = 0;
    for (long long i = 1; i <= n; i++) {
        cin >> x;
        gcd = __gcd(x, gcd);
    }
    cout << gcd;
    return 0;
}