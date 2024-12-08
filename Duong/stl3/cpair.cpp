#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    if (fopen("cpair.inp", "r")) {
        freopen("cpair.inp", "r", stdin);
        freopen("cpair.out", "w", stdout);
    }

    long long n;
    cin >> n;

    unordered_map <long long, long long> m;
    for (long long i = 1; i <= n; i++) {
        long long x;
        cin >> x;
        m[x]++;
    }

    long long count = 0;
    for (auto [key, value] : m) {
        count += value * (value - 1) / 2;
    }
    
    cout << count;
}