#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1e9 + 7;
int main() {
    long long n;
    cin >> n;
    n %= MOD;
    long long sum = 0;
    for (long long i = 3; i <= 2*n-1; i+=2) {
        sum += i * (i-2)*(i-1) % MOD;
    }
    cout << sum % MOD;
}