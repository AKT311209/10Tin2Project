#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("tab.inp", "r")) {
        freopen("tab.inp", "r", stdin);
        freopen("tab.out", "w", stdout);
    }
    int n;
    cin >> n;
    int a[n+2][n+2];
    memset(a, 0, sizeof(a));
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    int res[n+2][n+2];
    memset(res, 0, sizeof(res));
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            res[i][j] = a[i][j] + a[i-1][j] + a[i+1][j] + a[i][j-1] + a[i][j+1];
        }
    }
    cout << n << '\n';
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << res[i][j] << ' ';
        }
        cout << '\n';
    }

}