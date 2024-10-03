#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1e9 + 7;
int main() {
    long long n;
    cin >> n;
    n %= MOD;
    long long sum = 0;
    for (long long i = 3; i <= n; i++) {
        sum += i * (i-2) % MOD;
    }
    cout << sum % MOD;
}
