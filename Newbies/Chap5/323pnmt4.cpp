#include <bits/stdc++.h>

using namespace std;

int main()
{
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

    // Above
    for (int i = x; i >= 1; i--)
    {
        cout << matrix[i][y] << ' ';
    }
    cout << '\n';
    // Right
    for (int j = y; j <= n; j++)
    {
        cout << matrix[x][j] << ' ';
    }
    cout << '\n';
    // Below
    for (int i = x; i <= m; i++)
    {
        cout << matrix[i][y] << ' ';
    }
    cout << '\n';
    // Left
    for (int j = y; j >= 1; j--)
    {
        cout << matrix[x][j] << ' ';
    }
    cout << '\n';
}