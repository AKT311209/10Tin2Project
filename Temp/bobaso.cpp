#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if (fopen("bobaso.inp", "r")) {
        freopen("bobaso.inp", "r", stdin);
        freopen("bobaso.out", "w", stdout);
    }
    int n;
    cin >> n;

    // Sieve of Eratosthenes
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= n; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    int count = 0;
    for (int a = 2; a <= n / 3; a++) {
        if (!isPrime[a]) continue;
        for (int b = a; b <= (n - a) / 2; b++) {
            int c = n - a - b;
            if (c >= b && isPrime[b] && isPrime[c]) {
                count++;
            }
        }
    cout << count;
    return 0;
}   cout << count;
}