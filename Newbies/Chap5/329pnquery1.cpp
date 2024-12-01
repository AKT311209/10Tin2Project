#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, query;
    cin >> n >> query;

    long long a[n + 2];
    memset(a, 0, sizeof(a));
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < query; i++)
    {
        long long p;
        cin >> p;
        a[p - 1]+=p;
        a[p + 1]+=p;
        a[p] += p;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
}