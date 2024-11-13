#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for (long long p = 2; p*p <= n; p++) {
        if (prime[p] == true) {
            for (long long i = p*p; i <= n; i += p) {
                prime[i] = false;
            }
        }
    }
    for (long long p = 2; p <= n; p++) {
        if (prime[p]) {
            cout << p << ' ';
        }
    }
    
    
}