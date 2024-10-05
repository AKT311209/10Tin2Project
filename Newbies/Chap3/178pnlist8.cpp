#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k, x;
    cin >> n >> k;
    long long sum = 0;
    long long count = 0;
    for (long long i = 1; i <= n; i++)
    {
        cin >> x;
        if (x % k == 0)
        {
            sum += x;
            count++;
        }
    }
    if (count == 0)
    {
        cout << -1;
    }
    else
    {
        cout << fixed << setprecision(2) << (double)sum / count;
    }
    return 0;
}
