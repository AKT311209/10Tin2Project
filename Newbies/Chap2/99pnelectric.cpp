#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long x;
    cin >> x;
    if (x < 50)
    {
        cout << 1678 * x;
    }
    else if (x <= 100)
    {
        cout << 50 * 1678 + 1734 * (x - 50);
    }
    else if (x <= 200)
    {
        cout << 50 * 1678 + 1734 * 50 + 2014 * (x - 100);
    }
    else if (x <= 300)
    {
        cout << 50 * 1678 + 1734 * 50 + 2014 * 100 + 2536 * (x - 200);
    }
    else
    {
        cout << 50 * 1678 + 1734 * 50 + 2014 * 100 + 2536 * 100 + 2834 * (x - 300);
    }
}
