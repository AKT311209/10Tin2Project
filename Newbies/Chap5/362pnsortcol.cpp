#include <bits/stdc++.h>

using namespace std;

int mat[1005][1005];
int main() {
    int m, n;
    cin >> m >> n;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> mat[i][j];
        }
    }

    for (int j = 1; j <= n; j++) {
        vector<int> col;
        for (int i = 1; i <= m; i++) {
            col.push_back(mat[i][j]);
        }
        sort(col.begin(), col.end(), greater<int>());
        for (int i = 1; i <= m; i++) {
            mat[i][j] = col[i - 1];
        }
    }

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cout << mat[i][j] << ' ';
        }
        cout << '\n';
    }
}