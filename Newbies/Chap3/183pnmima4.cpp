#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, x;
    cin >> n;
    long long min = 1000000000;
    long long max = -1000000000;
    long long minlast = 0;
    long long maxfirst = 0;
    for (long long i = 1; i <= n; i++)
    {
        cin >> x;
        if (x <= min)
        {
            min = x;
            minlast = i;
        }
        if (x > max)
        {
            max = x;
            maxfirst = i;
        }
    }
    cout << minlast << " " << maxfirst;
}