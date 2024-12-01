#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long a[n + 1];

    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    long long count = 0;
    for (long long i = 1; i <= n; i++)
    {
        for (long long j = i+1; j <= n; j++)
        {
            if (a[i] != a[j])
            {
                count++;
            }
        }
    }

    cout << count;
}