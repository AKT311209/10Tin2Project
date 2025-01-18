#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> mat(m, vector<int>(n, 0));
    int cnt = 1;
    for (int row = m - 1; row >= 0; row--)
    {
        int i = row, j = 0;
        while (i < m && j < n)
        {
            mat[i][j] = cnt++;
            i++;
            j++;
        }
    }
    for (int col = 1; col < n; col++)
    {
        int i = 0, j = col;
        while (i < m && j < n)
        {
            mat[i][j] = cnt++;
            i++;
            j++;
        }
    }

    for (auto r : mat)
    {
        for (auto num : r)
        {
            cout << num << ' ';
        }
        cout << '\n';
    }
    return 0;
}