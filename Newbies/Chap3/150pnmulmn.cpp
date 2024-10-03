#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    long long res = 1;
    for (int i = m; i <= n; i++)
    {
        res *= i;
    }
    cout << res;
}