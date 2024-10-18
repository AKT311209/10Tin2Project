#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("ptso.inp", "r")) {
        freopen("ptso.inp", "r", stdin);
        freopen("ptso.out", "w", stdout);
    }
    long long n;
    cin >> n;
    if (n%2) {
        cout << -1;
        return 0;
    } else {
        long long res1 = n/2; long long res2 = n/2;
        if (res1%2==0) {
            cout << res1+1 << " " << res2-1;
        } else {
            cout << res2 << " " << res1;
        }
    }
}