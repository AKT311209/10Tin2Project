#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    {
        if (k <= n - n / 2)
        {
            cout << 1 + 2 * (k - 1);
        }
        else
        {
            cout << 2 + (k - (n - n / 2) - 1) * 2;
        }
    }
}
