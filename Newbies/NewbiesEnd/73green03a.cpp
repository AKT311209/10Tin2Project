#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> grid(n);
    for (int i = 0; i < n; i++)
        cin >> grid[i];

    vector<vector<int>> val(n, vector<int>(n, 0));
    int dirs[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == 'O')
            {
                continue;
            }
            int cnt = 0;
            for (auto dir : dirs)
            {
                int ni = i + dir[0], nj = j + dir[1];
                if (ni >= 0 && ni < n && nj >= 0 && nj < n && grid[ni][nj] == 'O')
                    cnt++;
            }
            val[i][j] = cnt;
        }
    }

    int count = 0;
    int dirs4[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            if (grid[i][j] != 'X')
                continue;
            int cnt = 0;
            vector<pair<int, int>> empt;
            for (auto dir : dirs4)
            {
                int ni = i + dir[0], nj = j + dir[1];
                if (grid[ni][nj] == 'O')
                    cnt++;
                else
                    empt.emplace_back(ni, nj);
            }
            if (cnt == 2 && empt.size() == 2)
            {
                int val1 = val[empt[0].first][empt[0].second];
                int val2 = val[empt[1].first][empt[1].second];
                if ((val1 % 2 != val2 % 2))
                {
                    count++;
                }
            }
        }
    }
    cout << count;
}