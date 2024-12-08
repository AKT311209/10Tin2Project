#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if (fopen("airc.inp", "r"))
    {
        freopen("airc.inp", "r", stdin);
        freopen("airc.out", "w", stdout);
    }
    long long n;
    vector<long long> arr;
    cin >> n;
    for (long long i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        arr.push_back(x);
    }

    vector<pair<long long, long long>> choice;
    long long choices;
    cin >> choices;
    for (long long i = 0; i < choices; i++)
    {
        long long x, y;
        cin >> x >> y;
        choice.push_back(make_pair(x, y));
    }
    sort(arr.begin(), arr.end());

    long long sum = 0;
    for (auto p : arr)
    {
        if (p < choice[0].first)

    }
    cout << sum;
}