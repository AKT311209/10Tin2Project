#include <bits/stdc++.h>

using namespace std;

int main() {
    long long m, n;
    cin >> m >> n;
    long long matrix[m+1][n+1];
    
    for (long long i = 1; i <= m; i++)
    {
        for (long long j = 1; j <= n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    long long x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    long long sum = 0;
    for (long long i = x1; i <= x2; i++)
    {
        for (long long j = y1; j <= y2; j++)
        {
            sum += matrix[i][j];
        }
    }
    cout << sum;
}