#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int matrix[m + 1][n + 1];

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int x, y;
    cin >> x >> y;
    for (int j = 1; j <= n; j++)
        cout << matrix[x][j] << ' ';
    cout << '\n';
    for (int i = 1; i <= m; i++)
        cout << matrix[i][y] << ' ';
}