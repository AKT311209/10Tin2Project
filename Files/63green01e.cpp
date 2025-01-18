#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k, q;
    cin >> n >> k >> q;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long len = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= q)
        {
            len++;
        }
        else
        {
            if (len >= k)
            {
                long long count = (len - k + 1) * (len - k + 2) / 2;
                ans += count;
            }
            len = 0;
        }
    }
    if (len >= k)
    {
        long long count = (len - k + 1) * (len - k + 2) / 2;
        ans += count;
    }

    cout << ans << "\n";
    return 0;
}