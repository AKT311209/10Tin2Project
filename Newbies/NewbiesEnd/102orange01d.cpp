#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long m, n;
    cin >> m >> n;

    map<long long, long long, greater<long long>> mp;
    for (long long i = 1; i <= m; i++) {
        for (long long j = 1; j <= n; j++) {
            long long temp;
            cin >> temp;
            long long layer = min(min(i, j), min(m - i + 1, n - j + 1));
            mp[layer] += temp;
        }
    }
    for (auto item : mp) {
        cout << item.second << "\n";
    }
}