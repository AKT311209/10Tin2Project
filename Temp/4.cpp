#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("uocnt.inp", "r")) {
        freopen("uocnt.inp", "r", stdin);
        freopen("uocnt.out", "w", stdout);
    }
    long long n;
    cin >> n;
    long long count = 0;
    for (long long i = 2; i <= n; i++) {
        if (n % i == 0) {
            count++;
            while (n % i == 0) n /= i;
            i--;
        }
    }
    if (n > 1) count++;
    cout << count;
}