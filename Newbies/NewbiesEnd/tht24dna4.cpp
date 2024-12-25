#include <bits/stdc++.h>

using namespace std;

int main()
{
    int dirx[] = {0, 1, 0, -1};
    int diry[] = {1, 0, -1, 0};

    long long n;
    cin >> n;

    long long a[n + 1][n + 1];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = 0;
    long long num = 1;
    int x = 0, y = 0, dir = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            num += 2;
            a[x][y] = num;
            int nx = x + dirx[dir];
            int ny = y + diry[dir];
            if (nx < 0 || nx >= n || ny < 0 || ny >= n || a[nx][ny] != 0)
            {
                dir = (dir + 1) % 4;
                nx = x + dirx[dir];
                ny = y + diry[dir];
            }
            x = nx;
            y = ny;
        }
    }

    long long max = 0;
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
        sum += max;
        max = 0;
    }

    cout << sum;
}