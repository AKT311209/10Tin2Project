#include <bits/stdc++.h>

using namespace std;

int main()
{
    if (fopen("cb.inp", "r"))
    {
        freopen("cb.inp", "r", stdin);
        freopen("cb.out", "w", stdout);
    }

    long long n, m, c;
    cin >> n >> m >> c;

    vector<long long> a(n);
    for (auto &x : a)
        cin >> x;

    deque<int> min, max;
    vector<int> result;

    for (int i = 0; i < n; ++i)
    {
        while (!min.empty() && a[i] <= a[min.back()])
        {
            min.pop_back();
        }
        min.push_back(i);

        while (!max.empty() && a[i] >= a[max.back()])
        {
            max.pop_back();
        }
        max.push_back(i);

        if (min.front() <= i - m)
        {
            min.pop_front();
        }
        if (max.front() <= i - m)
        {
            max.pop_front();
        }

        if (i >= m - 1)
        {
            long long currentMin = a[min.front()];
            long long currentMax = a[max.front()];
            if (currentMax - currentMin <= c)
            {
                result.push_back(i - m + 2);
            }
        }
    }

    if (result.empty())
    {
        cout << "NONE";
    }
    else
    {
        for (auto pos : result)
        {
            cout << pos << "\n";
        }
    }
}