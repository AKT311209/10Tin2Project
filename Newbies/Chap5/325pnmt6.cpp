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

    long long sum = 0;
    for (long long i = 0; i < m; i++)
    {
        for (long long j = 0; j < n; j++)
        {
            if (matrix[i][j] < 0)
            {
                sum += matrix[i][j];
            }
        }
    }
    cout << sum;
}