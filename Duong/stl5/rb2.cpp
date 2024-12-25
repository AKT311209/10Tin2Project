#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    if (fopen("rb2.inp", "r")) {
        freopen("rb2.inp", "r", stdin);
        freopen("rb2.out", "w", stdout);
    }

    long long n;
    cin >> n;

    vector<long long> a(n), b(n);

    for (auto &x : a) {
        cin >> x;
    }

    for (auto &x : b) {
        cin >> x;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    long long minDis = LLONG_MAX;
    int i = 0, j = 0;
    while (i < n && j < n) {
        minDis = min(minDis, abs(a[i] - b[j]));
        if (a[i] < b[j]) {
            i++;
        } else {
            j++;
        }
    }
    cout << minDis;
}