#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, x;
    cin >> n;
    long long countpositive = 0;
    long long sumnpositive = 0;
    for (long long i = 1; i <= n; i++)
    {
        cin >> x;
        if (x >= 0)
        {
            countpositive++;
            sumnpositive += x;
        }
    }
    if (countpositive == 0)
    {
        cout << -1;
    }
    else
    {
        cout << fixed << setprecision(2) << (double)sumnpositive / countpositive;
    }
    return 0;
}