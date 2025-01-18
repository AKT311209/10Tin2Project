#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n, q, x, y;
    cin >> n >> q >> x >> y;
    long long dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
    long long dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};
    while (q--)
    {
        long long dir, step;
        cin >> dir >> step;
        dir--; // 0-based index
        long long nx = x + dx[dir] * step;
        long long ny = y + dy[dir] * step;
        if ((dir == 0 || dir == 2 || dir == 4 || dir == 6) && (nx < 1 || nx > n || ny < 1 || ny > n))
        {
            // Mirror through the edge
            if (nx > n)
                x = (nx - 1) % n + 1;
            if (ny > n)
                y = (ny - 1) % n + 1;
            if (nx < 1)
                x = nx % n + n;
            if (ny < 1)
                y = ny % n + n;
        }
        else if ((nx < 1 || nx > n || ny < 1 || ny > n))
        {

            // Up-Right
            if (dir == 1)
            {
                if (nx + ny < n + 1)
                {
                    // Will move out on the top edge
                    long long id = nx + ny - 1;
                    x = nx % id + id;
                    y = nx + ny - x;
                }
                else
                {
                    // Will move out on the right edge
                    long long id = 2 * n - nx - ny + 1;
                    long long start = n - id + 1;
                    y = (ny - start) % id + start;
                    x = nx + ny - y;
                }
            }
            // Down-Left
            else if (dir == 5)
            {
                if (nx + ny > n + 1)
                {
                    // Will move out on the bottom edge
                    long long id = 2 * n - nx - ny + 1;
                    long long start = n - id + 1;
                    x = (nx - start) % id + start;
                    y = nx + ny - x;
                }
                else
                {
                    // Will move out on the left edge
                    long long id = nx + ny - 1;
                    y = ny % id + id;
                    x = nx + ny - y;
                }
            }
            // Down - Right
            else if (dir == 3)
            {
                if (nx > ny)
                {
                    // Will move out on the bottom edge
                    long long id = (n) - (nx - ny);
                    long long start = n - id + 1;
                    x = (nx - start) % id + start;
                    y = x - (nx - ny);
                }
                else
                {
                    // Will move out on the right edge
                    long long id = (n) - (ny - nx);
                    long long start = n - id + 1;
                    y = (ny - start) % id + start;
                    x = y - (ny - nx);
                }
            }
            // Up - Left
            else
            {
                if (nx > ny)
                {
                    // Will move out on the left edge
                    long long id = (n) - (nx - ny);
                    y = ny % id + id;
                    x = y + (nx - ny);
                }
                else
                {
                    // Will move out on the top edge
                    long long id = (n) - (ny - nx);
                    x = nx % id + id;
                    y = x + (ny - nx);
                }
            }
        }
        else
        {
            x = nx;
            y = ny;
        }
        cout << x << " " << y << "\n";
    }
}
