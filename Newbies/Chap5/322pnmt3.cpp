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

    int x;
    cin >> x;
    if (x%2) {
        for (int j = 1; j <= n; j++)
            cout << matrix[x][j] << ' ';
    } else {
        for (int j = n; j >= 1; j--)
            cout << matrix[x][j] << ' ';
    }
}