#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    if (fopen("dem35.inp", "r")) {
        freopen("dem35.inp", "r", stdin);
        freopen("dem35.out", "w", stdout);
    }

    long long query;
    cin >> query;

    for (int i = 0; i<query; i++) {
        long long n;
        cin >> n;
        cout << n/3+n/5-n/15 << '\n';
    }
}