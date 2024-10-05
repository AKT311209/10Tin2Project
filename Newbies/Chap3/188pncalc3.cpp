#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1000000007;
int main() {
    long long n, x;
    cin >> n;
    long long sum = 0;
    for (long long i = 1; i <= 2*n-1; i += 2) {
        cin >> x;
        if (i % 4 == 1) {
            sum += x*i;
            sum = (sum % MOD + MOD) % MOD; // to avoid negative numbers
        } else {
            sum -= x*i;
            sum = (sum % MOD + MOD) % MOD; // to avoid negative numbers
        }
    }
    cout << sum;
}