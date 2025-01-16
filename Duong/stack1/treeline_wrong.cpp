#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    if (fopen("TREELINE.inp", "r")) {
        freopen("TREELINE.inp", "r", stdin);
        freopen("TREELINE.OUT", "w", stdout);
    }
    long long n;
    cin >> n;
    vector<long long> a(n + 1);
    vector<long long> z;
    vector<long long> day(n + 1, 1);
    stack<long long> s;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    long long maxx = a[1];
    z.push_back(1);
    for (int i = 2; i <= n; i++) {
        if (a[i] > maxx) {
            maxx = a[i];
            z.push_back(i);
        }
    }
    for (size_t j = 0; j < z.size() - 1; j++) {
        long long p = a[z[j]] + 1;
        long long q = a[z[j + 1]] - 1;
        for (int i = p + 1; i <= q; i++) {
            day[i] = 1;
            while (!s.empty() && a[s.top()] < a[i]) {
                day[i] = max(day[i], day[s.top()] + 1);
                s.pop();
            }
            s.push(i);
        }
    }
    long long maxngay = *max_element(day.begin(), day.end());
    cout << maxngay;
    return 0;