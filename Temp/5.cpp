#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k;
    cin >> n;
    k = 2;
    if (n % 4 == 1 || n % 4 == 2)
    {
        for (long long i = 1; i <= n; i++)
        {
            for (long long j = 1; j <= n; j++)
            {
                if (min({i, j, n - i + 1, n - j + 1}) % k == 0)
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
    else
    {
        for (long long i = 1; i <= n; i++)
        {
            for (long long j = 1; j <= n; j++)
            {
                if (min({i, j, n - i + 1, n - j + 1}) % k == 0)
                {
                    cout << "◼";
                }
                else
                {
                    cout << "◻";
                }
            }
            cout << '\n';
        }
    }

    return 0;
}
