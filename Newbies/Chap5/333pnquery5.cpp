#include <bits/stdc++.h>

using namespace std;

int main() {
    long long m, n, q;
    cin >> m >> n >> q;

    bool a[m + 1][n + 1];

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < q; i++) {
        long long x;
        cin >> x;
        for (int j = 1; j <= n; j++) {
            a[x][j] = !a[x][j];
        }
    }

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
}