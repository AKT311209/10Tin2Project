#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    if (fopen("cpic.inp", "r")) {
        freopen("cpic.inp", "r", stdin);
        freopen("cpic.out", "w", stdout);
    }
    long long n;
    cin >> n;

    set<long long> s;

    for (long long i = 0; i < n; i++) {
        long long x;
        cin >> x;
        s.insert(x);
    }
    cout << s.size();
}