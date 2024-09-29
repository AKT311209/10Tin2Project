#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1;
    cin >> x2 >> y2 >> r2;

    long long distance2 = (long long)((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    long long diffr2 = (long long)((r1 - r2) * (r1 - r2));
    long long sumr2 = (long long)((r1 + r2) * (r1 + r2));

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
