#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    if (fopen("treeline.inp", "r"))
    {
        freopen("treeline.inp", "r", stdin);
        freopen("treeline.out", "w", stdout);
    }

    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    stack<pair<long long, int>> st;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int day = 0;
        while (!st.empty() && st.top().first < arr[i])
        {
            day = max(day, st.top().second);
            st.pop();
        }
        if (!st.empty())
        {
            day++;
        }
        ans = max(ans, day);
        st.push({arr[i], day});
    }

    cout << ans << "\n";
    return 0;
}