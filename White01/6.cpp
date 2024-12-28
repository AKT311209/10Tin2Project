#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    // Draw from outside
    for (long long i = 1; i <= n; i++)
    {
        for (long long j = 1; j <= n; j++)
        {
            if ((min({i, j, n - i + 1, n - j + 1}) - 1) % (k * 2) >= k)
            {
                cout << "◻";
            }
            else
            {
                cout << "◼";
            }
        }
        cout << ' ';
        // Draw from inside
        long long center = (n+1) / 2;
        for (long long j = 1; j <= n; j++)
        {
            if (abs(center+1-(min({i, j, n - i + 1, n - j + 1}))-1) % (k * 2) >= k)
            {
                cout << "◻";
            }
            else
            {
                cout << "◼";
            }
        }
        cout << '\n';
    }
}