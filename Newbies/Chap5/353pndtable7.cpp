#include <bits/stdc++.h>

using namespace std;

int main() {
    long long m, n;
    cin >> m >> n;

    int num = 1;
    int a[m + 1][n + 1];
    memset(a, 0, sizeof(a));
    const int dx[] = {0, 1, 0, -1};
    const int dy[] = {1, 0, -1, 0};

    int x = 1, y = 1, dir = 0;

    while (num <= m * n) {
        a[x][y] = num;
        num++;

        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (nx < 1 || nx > m || ny < 1 || ny > n || a[nx][ny] != 0) {
            dir = (dir + 1) % 4;
            nx = x + dx[dir];
            ny = y + dy[dir];
        }

        x = nx;
        y = ny;
    }

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
}