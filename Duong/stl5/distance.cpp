#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    if (fopen("distance.inp", "r")) {
        freopen("distance.inp", "r", stdin);
        freopen("distance.out", "w", stdout);
    }
    long long n;
    cin >> n;
    vector<pair<long long, long long>> a(n);

    for (auto &x : a) {
        cin >> x.first >> x.second;
    }
    long long max1 = LLONG_MIN, min1 = LLONG_MAX;
    long long max2 = LLONG_MIN, min2 = LLONG_MAX;

    for (const auto &x : a) {
        long long sum = x.first + x.second;
        long long diff = x.first - x.second;
        max1 = max(max1, sum);
        min1 = min(min1, sum);
        max2 = max(max2, diff);
        min2 = min(min2, diff);
    }

    long long maxDis = max(max1 - min1, max2 - min2);

    cout << maxDis;
}