#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long top = (n + 1) / 2;
    // Top half
    for (long long i = 1; i <= top; i++)
    {
        for (long long j = 1; j <= 2*n-1; j++)
        {
            if ((i == 1 && j >= top && j < top + n) || (i > 1 && (j == top - i + 1 || j == 2*n-1 + i-top)))
            {
                cout << '*';
            }
            else
            {
                cout << ' ';
            }
        }
        cout << '\n';
    }
    // Bottom half
    for (long long i = top + 1; i <= n; i++)
    {
        for (long long j = 1; j <= 2*n-1; j++)
        {
            if ((i == n && j >= top && j < top + n) || (i < n && (j == i - top + 1 || j == 2*n-1 + top-i)))
            {
                cout << '*';
            }
            else
            {
                cout << ' ';
            }
        }
        cout << '\n';
    }
}