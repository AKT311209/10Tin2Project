#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long m, n;
    cin >> m >> n;
    long long matrix[m][n];

    for (long long i = 0; i < m; i++)
    {
        for (long long j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (long long i = 0; i < m; i++) {
        cout << accumulate(matrix[i], matrix[i] + n, 0) << '\n';
    }
}