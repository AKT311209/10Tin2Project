#include <bits/stdc++.h>

using namespace std;

int mat[1005][1005];
int main()
{
    int m, n;
    cin >> m >> n;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> mat[i][j];
        }
    }

    int minrow[m + 1];
    int maxcol[n + 1];
    fill(minrow, minrow + m + 1, INT_MAX);
    fill(maxcol, maxcol + n + 1, INT_MIN);

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            minrow[i] = min(minrow[i], mat[i][j]);
            maxcol[j] = max(maxcol[j], mat[i][j]);
        }
    }

    int count = 0;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (mat[i][j] == minrow[i] && mat[i][j] == maxcol[j])
            {
                count++;
            }
        }
    }

    cout << count;
}