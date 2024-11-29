#include <bits/stdc++.h>

using namespace std;

// long long sum(long long k, long long n);

// long long count(long long k, long long n) {
//     if (n == 0) return k;
//     return sum(k, n-1) + count(k, n-1);
// }

// long long sum(long long k, long long n) {
//     if (n == 0) return k;
//     return 2*sum(k, n-1) + count(k, n-1);
// }
long long MOD = 1e9 + 7;
long long count_iter(long long n, long long k) {
    long long count = k;
    long long sum = k;
    for (long long i = 1; i <= n; ++i) {
        long long new_count = sum + count;
        new_count = (new_count % MOD+MOD) % MOD;
        long long new_sum = 2 * sum + count;
        new_sum = (new_sum % MOD+MOD) % MOD;
        count = new_count;
        sum = new_sum;
    }
    count = (count % MOD+MOD) % MOD;
    return count;
}

int main() {
    if (fopen("flashback.inp", "r")) {
        freopen("flashback.inp", "r", stdin);
        freopen("flashback.out", "w", stdout);
    }
    long long n, k;
    cin >> k >> n;
    cout << count_iter(n, k);
}