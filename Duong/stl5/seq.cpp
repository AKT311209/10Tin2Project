#include <bits/stdc++.h>

using namespace std;

int main()
{
    if (fopen("seq.inp", "r"))
    {
        freopen("seq.inp", "r", stdin);
        freopen("seq.out", "w", stdout);
    }

    long long n, k;
    cin >> n >> k;

    vector<long long> a(n + 1, 0);
    vector<long long> b(n + 1, 0);

    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (long long i = 1; i <= n; i++)
    {
        cin >> b[i];
    }

    map<long long, long long> windowA;
    map<long long, long long> windowB;

    for (long long i = 0; i < k; i++)
    {
        windowA[a[i]]++;
        windowB[b[i]]++;
    }

    long long maxSum = 0;
    for (long long i = k; i <= n; i++)
    {
        windowA[a[i - k]]--;
        windowB[b[i - k]]--;
        if (windowA[a[i - k]] == 0)
        {
            windowA.erase(a[i - k]);
        }
        if (windowB[b[i - k]] == 0)
        {
            windowB.erase(b[i - k]);
        }
        
        windowA[a[i]]++;
        windowB[b[i]]++;

        auto itminA = windowA.begin();
        auto itmaxB = windowB.rbegin();

        maxSum = max(maxSum, itminA->first + itmaxB->first);
    }

    cout << maxSum;
}