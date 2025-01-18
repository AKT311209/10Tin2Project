#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;

    if (n == 1)
    {
        cout << "1\n";
        return 0;
    }

    long long period = 2 * (n - 1);
    long long pos = k % period;

    if (pos <= n - 1)
    {
        cout << (1 + pos) << "\n";
    }
    else
    {
        cout << (2 * n - 1 - pos) << "\n";
    }
}