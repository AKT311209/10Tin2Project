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
    a[0] = LLONG_MIN;

    long long len = 0;
    long long maxlen = LLONG_MIN;

    for (long long i = 1; i <= n; i++)
    {
        if (a[i] >= a[i - 1])
        {
            len++;
        }
        else
        {
            maxlen = max(maxlen, len);
            len = 1;
        }
    }

    maxlen = max(maxlen, len);
    cout << maxlen;
}