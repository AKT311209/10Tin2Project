#include <bits/stdc++.h>

using namespace std;

int mat[1005][1005];

int main() {
    for (int i = 0; i <= 1004; i++) {
        for (int j = 0; j <= 1004; j++) {
            mat[i][j] = INT_MIN;
        }
    }
    int m, n;
    cin >> m >> n;

    for (int i = 1; i <=m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> mat[i][j];
        }
    }

    int count = 0;

    for (int j = 1; j <= n; j++) {
        bool flag = true;
        for (int i = 1; i <= m; i++) {
            if (mat[i][j] < mat[i-1][j]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            count++;
        }
    }

    cout << count << '\n';
}