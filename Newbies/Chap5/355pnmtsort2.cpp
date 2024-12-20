#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n;
    const int dx[] = {0, 1, 0, -1};
    const int dy[] = {1, 0, -1, 0};
    cin >> m >> n;

    vector<long long> v;
    int ans[m + 1][n + 1];
    memset(ans, 0, sizeof(ans));
    long long temp = 0;
    while (cin >> temp)
    {
        v.push_back(temp);
    }

    sort(v.begin(), v.end());
    int x = 1, y = 1, dir = 0;
    for (size_t i = 0; i < v.size(); i++)
    {
        ans[x][y] = v[i];
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (nx < 1 || nx > m || ny < 1 || ny > n || ans[nx][ny] != 0)
        {
            dir = (dir + 1) % 4;
            nx = x + dx[dir];
            ny = y + dy[dir];
        }

        x = nx;
        y = ny;
    }

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << '\n';
    }
    
}