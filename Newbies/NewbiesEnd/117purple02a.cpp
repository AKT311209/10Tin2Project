#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long x1, y1, a1, x2, y2, a2;
    cin >> x1 >> y1 >> a1 >> x2 >> y2 >> a2;

    long long x1_br = x1 + a1;
    long long y1_tr = y1 + a1;
    long long x2_br = x2 + a2;
    long long y2_tr = y2 + a2;

    if (x1 == x2 && y1 == y2 && a1 == a2)
    {
        cout << "1\n";
        return 0;
    }

    if (x1 >= x2 && y1 >= y2 && x1_br <= x2_br && y1_tr <= y2_tr)
    {
        cout << "2\n";
        return 0;
    }

    if (x2 >= x1 && y2 >= y1 && x2_br <= x1_br && y2_tr <= y1_tr)
    {
        cout << "2\n";
        return 0;
    }

    bool overlap = !(x1_br <= x2 || x2_br <= x1 || y1_tr <= y2 || y2_tr <= y1);
    if (overlap)
    {
        cout << "3\n";
    }
    else
    {
        cout << "4\n";
    }

    return 0;
}