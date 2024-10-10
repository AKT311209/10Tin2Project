#include <bits/stdc++.h>

using namespace std;

long long mod = 1e9 + 7;
int main() {
    long long x, n;
    cin >> x >> n;
    long long s = 0;
    long long pow = 1;
    for (int i = 0; i < n; i++) {
        pow = pow * x % mod;
        s = (s + pow) % mod;
    }
    cout << s;
    return 0;
}
