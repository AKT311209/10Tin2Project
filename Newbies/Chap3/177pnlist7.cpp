#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, x;
    cin >> n;
    long long countnegative = 0;
    long long sumnpositive = 0;
    for (long long i = 1; i <= n; i++)
    {
        cin >> x;
        if (x < 0)
        {
            countnegative++;
        }
        else
        {
            sumnpositive += x;
        }
    }
    {
        if (countnegative == n)
        {
            cout << -1;
        }
        else
        {
            cout << fixed << setprecision(2) << (double)sumnpositive / (n - countnegative);
        }
    }
}
