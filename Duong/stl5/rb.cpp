#include <bits/stdc++.h>

using namespace std;

int main()
{
    if (fopen("rb.inp", "r"))
    {
        freopen("rb.inp", "r", stdin);
        freopen("rb.out", "w", stdout);
    }

    long long points;
    cin >> points;

    vector<pair<long long, long long>> red(points);
    multiset<pair<long long, long long>> blue;

    for (long long i = 0; i < points; i++)
    {
        cin >> red[i].first >> red[i].second;
    }

    for (long long i = 1; i <= points; i++)
    {
        long long first, second;
        cin >> first >> second;
        blue.insert({first, second});
    }


    sort(red.begin() + 1, red.end());
    long long count = 0;
    for (auto pair : red)
    {
        auto it = blue.begin();
        while (it != blue.end() && it->first < pair.first)
            it++;
        while (it != blue.end() && it->second < pair.second)
            it++;
        if (it == blue.end()) continue;
        blue.erase(it);
        count++;
    }

    cout << count;
}