#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("mg.inp", "r")) {
        freopen("mg.inp", "r", stdin);
        freopen("mg.out", "w", stdout);
    }
    long long m, n;
    cin >> m >> n;
    long long a[m], c[n];
    for (long long i = 0; i < m; i++) {
        cin >> a[i];
    }
    for (long long i = 0; i < n; i++) {
        cin >> c[i];
    }
    long long res[m+n];
    // two cursors
    long long i = 0, j = 0;
    for (long long k = 0; k < m+n; k++) {
        if (i == m) {
            res[k] = c[j];
            j++;
        } else if (j == n) {
            res[k] = a[i];
            i++;
        } else if (a[i] < c[j]) {
            res[k] = a[i];
            i++;
        } else {
            res[k] = c[j];
            j++;
        }
    }
    for (long long i = 0; i < m+n; i++) {
        cout << res[i] << ' ';
    }
}