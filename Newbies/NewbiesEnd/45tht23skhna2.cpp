#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long x, y, n;
    cin >> x >> y >> n;

    long long cycle = n / (x + y);

    if (n % (x + y) == 0)
    {
        cout << cycle * 2;
    }
    else if (cycle * (x + y) + x >= n)
    {
        cout << cycle * 2 + 1;
    }
    else
    {
        cout << cycle * 2 + 2;
    }
}