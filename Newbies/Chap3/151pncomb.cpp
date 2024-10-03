#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> k >> n;
    long long n_fact = 1;
    for (int i = 2; i <= n; ++i) {
        n_fact *= i;
    }

    long long k_fact = 1;
    for (int i = 2; i <= k; ++i) {
        k_fact *= i;
    }

    long long n_k_fact = 1;
    for (int i = 2; i <= (n - k); ++i) {
        n_k_fact *= i;
    }

    long long res = n_fact / (k_fact * n_k_fact);

    cout << res;
}