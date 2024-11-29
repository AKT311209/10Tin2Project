#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    if (fopen("abm.inp", "r")) {
        freopen("abm.inp", "r", stdin);
        freopen("abm.out", "w", stdout);
    }

    long long a, b, m;
    cin >> a >> b >> m;
    vector <long long> arra;
    vector <long long> arrb;

    for (long long i = 0; i < a; i++) {
        long long x;
        cin >> x;
        arra.push_back(x);
    }
    for (long long i = 0; i < b; i++) {
        long long x;
        cin >> x;
        arrb.push_back(x);
    }

    long long res = *min_element(arra.begin(), arra.end()) + *min_element(arrb.begin(), arrb.end());

    for (long long i = 0; i < m; i++) {
        long long x, y, c;
        cin >> x >> y >> c;
        res = min(res, arra[x - 1] + arrb[y - 1] - c);
    }
    cout << res;
}