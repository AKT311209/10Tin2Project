#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    if (fopen("find1.inp", "r")) {
        freopen("find1.inp", "r", stdin);
        freopen("find1.out", "w", stdout);
    }

    long long n;
    cin >> n;
    long long s;

    map <long long, long long> m;

    while (cin >> s) {
        m[s]++;
    }

    for (auto [key, value] : m) {
        if (value == 1) {
            cout << key;
            break;
        }
    }
}