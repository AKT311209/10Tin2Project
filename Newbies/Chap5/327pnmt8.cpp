#include <bits/stdc++.h>

using namespace std;

int main() {
    long long m, n;
    cin >> m;
    n = m;
    long long matrix[m+1][n+1];

    for (long long i = 1; i <= m; i++)
    {
        for (long long j = 1; j <= n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // Calculate sum of diagonals
    long long sum = 0;
    for (long long i = 1; i <= m; i++)
    {
        sum += matrix[i][i];
        sum += matrix[i][n - i + 1];
    }
    if (m % 2)
    {
        sum -= matrix[m / 2 + 1][n / 2 + 1];
    }
    cout << sum;

}