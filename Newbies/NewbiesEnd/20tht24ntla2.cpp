#include <bits/stdc++.h>

using namespace std;

int main()
{
    int D, M, Y;
    cin >> D >> M >> Y;

    if (M < 1 || M > 12)
    {
        cout << "NO";
        return 0;
    }

    int maxday;
    if (M == 2)
    {
        if ((Y % 4 == 0 && Y % 100 != 0) || (Y % 400 == 0))
            maxday = 29;
        else
            maxday = 28;
    }
    else if (M == 4 || M == 6 || M == 9 || M == 11)
    {
        maxday = 30;
    }
    else
    {
        maxday = 31;
    }

    if (D >= 1 && D <= maxday)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}