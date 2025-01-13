#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d, m, y;
    cin >> d >> m >> y;

    bool leap = (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);

    int dim[12] = {31, (leap ? 29 : 28), 31, 30, 31, 30,
                   31, 31, 30, 31, 30, 31};
    int res = 0;
    for (int i = 0; i < m - 1; i++)
        res += dim[i];
    res += d;

    cout << res << "\n";
    return 0;
}