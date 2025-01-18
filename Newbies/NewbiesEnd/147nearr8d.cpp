#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long m, n;
    cin >> m >> n;

    long long num = m * n;
    for (long long i = 1; i <= m; i++)
    {
        if (((m - i) % 2 + 2) % 2)
        {
            for (long long j = 1; j <= n; j++)
            {
                cout << num << " ";
                num--;
            }
        }
        else
        {
            num -= n - 1;
            for (long long j = 1; j <= n; j++)
            {
                cout << num << " ";
                num++;
            }
            num -= n+1;
        }
        cout << "\n";
    }
}