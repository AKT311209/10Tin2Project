#include <bits/stdc++.h>

using namespace std;

int main()
{
    if (
        fopen("weath.inp", "r"))
    {
        freopen("weath.inp", "r", stdin);
        freopen("weath.out", "w", stdout);
    }

    long long n, query;
    cin >> n >> query;

    vector<pair <long long, long long>> arr;
    for (long long i = 1; i <= n; i++)
    {
        long long x;
        cin >> x;
        arr.push_back(make_pair(x, 0));
    }

    for (long long i = 1; i <= query; i++)
    {
        long long l, r, k;
        cin >> l >> r >> k;
        for (auto &n: arr){
            if (n.first >= l && n.first <= r){
                if (n.first%2 == l%2){
                    n.second += k;
                } else {
                    n.second -= k;
                }
            }
        }
    }

    for (auto n: arr){
        cout << n.second << "\n";
    }
}