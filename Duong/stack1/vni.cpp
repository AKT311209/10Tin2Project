#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    if (fopen("vni.inp", "r"))
    {
        freopen("vni.inp", "r", stdin);
        freopen("vni.out", "w", stdout);
    }

    int n;
    cin >> n;
    vector<long long> arr(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    vector<long long> bestP(n + 2, 0);
    long long maxPrice = arr[n];
    long long acc = 0;
    bestP[n] = 0;

    for (int i = n - 1; i >= 1; i--)
    {
        if (arr[i] < maxPrice)
        {
            acc += (maxPrice - arr[i]);
        }
        else
        {
            maxPrice = arr[i];
        }
        bestP[i] = acc;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int d;
        cin >> d;
        cout << bestP[d] << "\n";
    }
    return 0;
}