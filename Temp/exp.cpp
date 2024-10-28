#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("exp.inp", "r")) {
        freopen("exp.inp", "r", stdin);
        freopen("exp.out", "w", stdout);
    }
    long long n, k;
    cin >> n >> k;

    long long a[n+1];
    for (long long i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a+2, a+n+1, greater<long long>());
    long long sum = a[1];
    for (long long i = 2; i < n+1; i++) {
        if (i<=k+1) {
            sum += a[i];
        } else {
            sum -= a[i];
        }
    }
    cout << sum;
}