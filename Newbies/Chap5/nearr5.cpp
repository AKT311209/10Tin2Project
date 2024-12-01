#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long a[n + 1];
    long long b[n + 1];
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (long long i = 1; i <= n; i++)
    {
        cin >> b[i];
    }

    sort(a + 1, a + n + 1);
    sort(b + 1, b + n + 1);

    long long count = 0;
    for (long long i = 1; i <= n; i++)
    {
        for (long long j = 1; j <= n; j++)
        {
            if (a[i] == b[j])
            {
                count++;
            }
        }
    }

    cout << count;
}