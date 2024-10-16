#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("tinhs.inp", "r")) {
        freopen("tinhs.inp", "r", stdin);
        freopen("tinhs.out", "w", stdout);
    }
    long long n;
    cin >> n;
    double res = (1-1/(2*(double)n+3))/2;
    cout << fixed << setprecision(10) << res;
}
