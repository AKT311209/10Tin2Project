#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k;
    cin >> n;
    // Draw from outside
    for (long long i = 1; i <= n; i++)
    {
        for (long long j = 1; j <= n; j++)
        {
            double layer = min({i, j, n - i + 1, n - j + 1});
            k = ceil((-1 + sqrt(1 + 4 * layer)) / 2); // k^2+k >= layer
            int offset = k * (k - 1);
            
            if ((min({i, j, n - i + 1, n - j + 1}) - 1 - offset) % (k * 2) >= k)
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
        long long center = (n + 1) / 2;
        for (long long j = 1; j <= n; j++)
        {
            int layer = center + 1 - (min({i, j, n - i + 1, n - j + 1}));
            k = ceil((-1 + sqrt(1 + 4 * layer)) / 2); // k^2+k >= layer
            int offset = k * (k - 1);

            if (abs(center + 1 - (min({i, j, n - i + 1, n - j + 1})) - 1 - offset) % (k * 2) >= k)
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