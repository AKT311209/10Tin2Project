#include <bits/stdc++.h>

using namespace std;

long long countDivisors(long long n) {
    long long count = 0;
    for (long long i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i) {
                count++;
            } else {
                count += 2;
            }
        }
    }
    return count;
}

int main() {
    if (fopen("uocso.inp", "r"))
    {
        freopen("uocso.inp", "r", stdin);
        freopen("uocso.out", "w", stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long n, x;
    cin >> n;
    long long maxDivisors = 0;
    long long maxn = 0;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        long long devi = countDivisors(x);  
        if (devi > maxDivisors) {
            maxDivisors = devi;
            maxn = x;
        }
    }
    cout << maxn;
}