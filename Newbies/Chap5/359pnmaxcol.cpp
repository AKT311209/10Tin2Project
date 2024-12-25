#include <bits/stdc++.h>

using namespace std;

int mat[1005][1005];
int main() {
    int m, n;
    cin >> m >> n;
    for (int i = 1; i <=m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> mat[i][j];
        }
    }

    int sum[n + 1];

    for (int j = 1; j <= n; j++) {
        sum[j] = 0;
        for (int i = 1; i <= m; i++) {
            sum[j] += mat[i][j];
        }
    }

    int max = sum[1];
    int pos = 1;
    for (int j = 2; j <= n; j++) {
        if (sum[j] >= max) {
            max = sum[j];
            pos = j;
        }
    }

    cout << max << " " << pos << '\n';
}