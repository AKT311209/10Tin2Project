#include <bits/stdc++.h>

using namespace std;

int main()
{
    if (fopen("wt.inp", "r"))
    {
        freopen("wt.inp", "r", stdin);
        freopen("wt.out", "w", stdout);
    }

    long long n;
    cin >> n;

    long long maxVol = LLONG_MIN;
    vector<long long> a(n + 1, 0);
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    long long it1 = 1;
    long long it2 = n;
    while (it1 < it2)
    {
        long long volume = min(a[it1], a[it2]) * (it2 - it1 - 1);
        maxVol = max(maxVol, volume);
        if (a[it1] < a[it2])
        {
            it1++;
        }
        else
        {
            it2--;
        }
    }

    cout << maxVol;
}
