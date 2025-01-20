#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<array<int, 4>> cmb = {
        {0, 0, 0, 1}, // 1
        {1, 0, 0, 2}, // 2
        {0, 1, 0, 3}, // 3
        {2, 0, 0, 4}, // 4
        {0, 0, 1, 5}, // 5
        {1, 1, 0, 6}  // 6
    };

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long k;
        cin >> n >> k;

        if (k == 0)
        {
            cout << -1 << "\n";
            continue;
        }
        int e2 = 0, e3 = 0, e5 = 0;
        long long tmp = k;

        while (tmp % 2 == 0)
        {
            e2++;
            tmp /= 2;
        }
        while (tmp % 3 == 0)
        {
            e3++;
            tmp /= 3;
        }
        while (tmp % 5 == 0)
        {
            e5++;
            tmp /= 5;
        }

        if (tmp != 1)
        {
            cout << -1 << "\n";
            continue;
        }

        int arr[21][13][7], temp[21][13][7];
        for (int a = 0; a <= e2; a++)
        {
            for (int b = 0; b <= e3; b++)
            {
                for (int c = 0; c <= e5; c++)
                {
                    arr[a][b][c] = -1;
                }
            }
        }
        arr[0][0][0] = 0;

        for (int i = 0; i < n; i++)
        {
            for (int a = 0; a <= e2; a++)
            {
                for (int b = 0; b <= e3; b++)
                {
                    for (int c = 0; c <= e5; c++)
                    {
                        temp[a][b][c] = -1;
                    }
                }
            }
            for (int a = 0; a <= e2; a++)
            {
                for (int b = 0; b <= e3; b++)
                {
                    for (int c = 0; c <= e5; c++)
                    {
                        int cur = arr[a][b][c];
                        if (cur < 0)
                            continue;
                        for (auto &x : cmb)
                        {
                            int da = x[0], db = x[1], dc = x[2], val = x[3];
                            int na = a + da, nb = b + db, nc = c + dc;
                            if (na <= e2 && nb <= e3 && nc <= e5)
                            {
                                temp[na][nb][nc] = max(temp[na][nb][nc], cur + val);
                            }
                        }
                    }
                }
            }
            for (int a = 0; a <= e2; a++)
            {
                for (int b = 0; b <= e3; b++)
                {
                    for (int c = 0; c <= e5; c++)
                    {
                        arr[a][b][c] = temp[a][b][c];
                    }
                }
            }
        }

        cout << arr[e2][e3][e5] << "\n";
    }

    return 0;
}