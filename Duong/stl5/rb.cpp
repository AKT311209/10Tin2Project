#include <bits/stdc++.h>

using namespace std;

int main()
{
    if (fopen("rb.inp", "r"))
    {
        freopen("rb.inp", "r", stdin);
        freopen("rb.out", "w", stdout);
    }
    long long n;
    cin >> n;
    vector<pair<pair<int, int>, int>> a(2 * n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first.first >> a[i].first.second;
        a[i].second = 1;
    }

    for (int i = n; i < 2 * n; i++)
    {
        cin >> a[i].first.first >> a[i].first.second;
        a[i].second = 0;
    }

    sort(a.begin(), a.end());

    long long count = 0;
    set<int> s;
    for (int i = 2*n-1; i >= 0; i--)
    {
        if (a[i].second == 0)
        {
            s.insert(a[i].first.second);
        }
        else
        {
            auto it = s.upper_bound(a[i].first.second);
            if (it != s.end())
            {
                count++;
                s.erase(it);
            }
        }
    }

    cout << count;
}