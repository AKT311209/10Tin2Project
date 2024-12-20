#include <bits/stdc++.h>

using namespace std;

int main() {
    long long m, n;
    cin >> m >> n;

    int num = 1;
    int a[m + 1][n + 1];

    for (int i = m; i >= 1; i--) {
        if ((1+m-i)%2) {
            for (int j = 1; j <= n; j++) {
                a[i][j] = num;
                num++;
            }
        } else {
            for (int j = n; j >= 1; j--) {
                a[i][j] = num;
                num++;
            }
        }
    }

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
}