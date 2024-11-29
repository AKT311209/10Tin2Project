#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("pointk.inp", "r")) {
        freopen("pointk.inp", "r", stdin);
        freopen("pointk.out", "w", stdout);
    }

    vector <pair <int, int>> points;
    long long n, k;
    cin >> n >> k;
    for (long long i = 0; i < n; i++) {
        long long x, y;
        cin >> x >> y;
        points.push_back(make_pair(x, y));
    }

    sort(points.begin(), points.end());
    cout << points[k - 1].first << ' ' << points[k - 1].second;
}