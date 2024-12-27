#include <bits/stdc++.h>

using namespace std;

const int maxN = 1e6+5;
bool prime[maxN];

void sieve() {
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for (int i = 2; i*i < maxN; i++) {
        if (prime[i]) {
            for (int j = i*i; j < maxN; j += i) {
                prime[j] = false;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    if (fopen("pair.inp", "r")) {
        freopen("pair.inp", "r", stdin);
        freopen("pair.out", "w", stdout);
    }

    long long n, k;
    cin >> n >> k;

    sieve();
    long long count = 0;
    for (int i = 2; i <= n-k; i++) {
        if (prime[i] && prime[i+k]) {
            count++;
        }
    }

    cout << count;
}