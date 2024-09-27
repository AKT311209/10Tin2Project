#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    {
        if (k <= n / 2)
        {
            cout << (n/2*2) - 2 * (k - 1);
        }
        else
        {
            cout << 1 + (k - (n / 2) - 1) * 2;
        }
    }
}
