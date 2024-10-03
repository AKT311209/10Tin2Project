#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    for (int i = n; i >= m; i--)
    {
        if (i % 2 == 0 && i % 3 != 0)
        {
            cout << i << ' ';
        }
    }
}