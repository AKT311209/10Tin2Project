#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    if (k % 6 == 4)
    {
        cout << k + 2;
    }
    else if (k % 6 == 0)
    {
        cout << k - 2;
    }
    else
    {
        cout << k;
    }
}
