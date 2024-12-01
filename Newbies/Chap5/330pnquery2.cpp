#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, query;
    cin >> n >> query;

    long long a[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    long long prefix[n + 1];
    memset(prefix, 0, sizeof(prefix));
    for (int i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i - 1] + a[i];
    }

    for (int i = 0; i < query; i++)
    {
        long long l, r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l - 1] << '\n';
    }
}