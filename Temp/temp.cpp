#include <bits/stdc++.h>

using namespace std;


int main() {
    if (fopen("loop1.inp", "r")) {
        freopen("loop1.inp", "r", stdin);
        freopen("loop1.out", "w", stdout);
    }
    long long n;
    cin >> n;
    double e = 1;
    for (int i=1; i<=n; i++) {
        long long p=1;
        for (int j=1; j<=i; j++){
            p *=j;
        }
        e+=1/(double)p;
    }
    cout << fixed << setprecision(2) << e;
}
