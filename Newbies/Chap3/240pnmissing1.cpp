#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, x, prev, m;
    cin >> n >> m;
    prev = 1;
    for (int i = 1; i <= m; i++)
    {
        cin >> x;
        if (x <= 1)
        {
            prev = x + 1;
            continue;
        }
        for (int j = prev; j < x; j++)
        {
            cout << j << ' ';
        }
        prev = x + 1;
    }
    for (int j = prev; j <= n; j++)
    {
        cout << j << ' ';
    }
    return 0;
}