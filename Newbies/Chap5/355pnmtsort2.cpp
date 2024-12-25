#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long m, n;
    const long long dx[] = {0, 1, 0, -1};
    const long long dy[] = {1, 0, -1, 0};
    cin >> m >> n;

    vector<long long> v;
        vector<vector<long long>> ans(m + 1, vector<long long>(n + 1, LLONG_MIN));
        long long temp = 0;
        for (long long i = 0; i < m * n; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }

    sort(v.begin(), v.end());
    long long x = 1, y = 1, dir = 0;
    for (size_t i = 0; i < v.size(); i++)
    {
        ans[x][y] = v[i];
        long long nx = x + dx[dir];
        long long ny = y + dy[dir];

        if (nx < 1 || nx > m || ny < 1 || ny > n || ans[nx][ny] != LLONG_MIN)
        {
            dir = (dir + 1) % 4;
            nx = x + dx[dir];
            ny = y + dy[dir];
        }

        x = nx;
        y = ny;
    }

    for (long long i = 1; i <= m; i++)
    {
        for (long long j = 1; j <= n; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << '\n';
    }
}