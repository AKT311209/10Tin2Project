#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long x, y, r;
    cin >> x >> y >> r;

    if (x * x + y * y <= 4 * r * r)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}