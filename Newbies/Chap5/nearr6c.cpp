#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin >> n;

    long long a[n+1];
    for (long long i = 1; i <= n; i++) {
        cin >> a[i];
    }
    
    long long b[n+1];
    for (long long i = 1; i <= n; i++) {
        cin >> b[i];
    }

    long long res[2*n+2];
    merge(a+1, a+n+1, b+1, b+n+1, res+1);
    
    for (long long k = 1; k <= 2*n; k++) {
        cout << res[k] << " ";
    }
}