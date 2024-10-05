#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1000000007;
int main() {
    long long n, x;
    cin >> n;
    long long sum = 0;
    for (long long i = 1; i <= n; i++) {
        cin >> x;
        sum += x*i*(i+1)/2;
        sum = (sum % MOD + MOD) % MOD; // to avoid negative numbers
    }
    cout << sum;
}