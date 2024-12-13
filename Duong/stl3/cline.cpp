#include <bits/stdc++.h>

using namespace std;

int main()
{
    if (fopen("cline.inp", "r"))
    {
        freopen("cline.inp", "r", stdin);
        freopen("cline.out", "w", stdout);
    }

    long long n;
    cin >> n;

    vector<tuple<long long, long long, long long>> array(n);

    for (auto &num : array)
    {
        cin >> get<0>(num) >> get<1>(num) >> get<2>(num);
    }

    set<double> slope;

    for (auto point : array)
    {
        long long a = get<0>(point);
        long long b = get<1>(point);
        long long c = get<2>(point);

        if (b == 0)
        {
            slope.insert((double)INT_MAX);
            continue;
        }
        slope.insert((double)-a / b);
    }

    cout << slope.size();
}