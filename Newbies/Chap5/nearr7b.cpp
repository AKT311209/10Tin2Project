#include <bits/stdc++.h>

using namespace std;

long long a[1000005];
int main()
{
    long long n;
    cin >> n;

    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    long long len = 0;
    for (long long i = 1; i <= n; i++)
    {
        if (a[i] > 0)
        {
            len++;
        }
        else
        {
            break;
        }
    }

    cout << len;
}