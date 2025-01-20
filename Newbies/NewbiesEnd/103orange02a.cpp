#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long m, n, k;
    cin >> m >> n >> k;

    long long res = -1;
    vector<long long> v;
    v.push_back(0);

    for (long long i = 0; i < m; i++)
    {
        long long temp;
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end());

    // Sliding window
    long long sum = 0;
    for (long long i = 1; i < n; i++)
    {
        sum += v[i];
    }

    for (long long i = 1; i <= m - n + 1; i++)
    {
        sum = sum + v[i + n - 1] - v[i - 1];
        if (v[i + n - 1] - v[i] <= k)
        {
            res = max(res, sum);
        }
    }
    if (res == -1)
    {
        cout << "Ken ca chon canh";
        return 0;
    }
    cout << res << "\n";
}