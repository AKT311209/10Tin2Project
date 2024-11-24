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

    // Upward border
    for (int i = 1; i <= n; i++)
    {
        cout << matrix[1][i] << ' ';
    }
    // Right border
    for (int i = 2; i <= m; i++)
    {
        cout << matrix[i][n] << ' ';
    }
    // Downward border
    for (int i = n - 1; i >= 1; i--)
    {
        cout << matrix[m][i] << ' ';
    }
    // Left border
    for (int i = m - 1; i >= 2; i--)
    {
        cout << matrix[i][1] << ' ';
    }
}