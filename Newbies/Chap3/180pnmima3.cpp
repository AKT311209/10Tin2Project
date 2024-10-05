#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, min, max, x;
    cin >> n;
    max = -1000000000;
    min = 1000000000;
    for (long long i = 1; i <= n; i++)
    {
        cin >> x;
        if (x > max)
        {
            max = x;
        }
        if (x < min)
        {
            min = x;
        }
    }
    cout << min << " " << max;
    return 0;
}