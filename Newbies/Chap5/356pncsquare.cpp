#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int matrix[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    long long sumlev[(n + 1) / 2];
    memset(sumlev, 0, sizeof(sumlev));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int lev = min({i, j, n - i + 1, n - j + 1});
            sumlev[lev - 1] += matrix[i][j];
        }
    }

    long long sum = 0;
    for (int i = (n + 1) / 2 - 1; i >= 0; i--)
    {
        sum += sumlev[i];
        cout << sum << '\n';
    }
}