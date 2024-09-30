#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double x1, y1, n1, x2, y2, n2, r1, r2;
    cin >> x1 >> y1 >> n1;
    cin >> x2 >> y2 >> n2;

    r1 = sqrt(2)*(n1/2); r2 = sqrt(2)*(n2/2);
    x1+=n1/2; y1+=n1/2; x2+=n2/2; y2+=n2/2;

    // 133
    double distance2 = (double)((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    double diffr2 = (double)((r1 - r2) * (r1 - r2));
    double sumr2 = (double)((r1 + r2) * (r1 + r2));

    if (distance2 >= sumr2)
    {
        cout << 4;
    }
    else if (distance2 > diffr2)
    {
        cout << 3;
    }
    else if (x1 == x2 && y1 == y2 && r1 == r2)
    {
        cout << 1;
    }
    else
    {
        cout << 2;
    }
}