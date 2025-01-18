#include <bits/stdc++.h>

using namespace std;

int main() {
    long long m, n;
    cin >> m >> n;
    long long a[m + 1][n + 1];

    long long num = 0;

    for (long long j = 1; j <= n/2; j++) {
        if (j%2) {
            for (long long i = m; i >= 1; i--)
                a[i][j] = ++num;
            for (long long i = 1; i <= m; i++)
                a[i][n+1-j] = ++num;
        } else {
            for (long long i = m; i >= 1; i--)
                a[i][n+1-j] = ++num;
            for (long long i = 1; i <= m; i++)
                a[i][j] = ++num;
        }
    }
    if (n%2) {
        for (long long i = m; i >= 1; i--)
            a[i][n/2+1] = ++num;
    }

    for (long long i = 1; i <= m; i++) {
        for (long long j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}