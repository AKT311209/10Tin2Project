#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    for (long long i = 1; i <= n; i++) {
        for (long long j = 1; j <= n - i; j++) {
            cout << ' ';
        }
        for (long long j = 1; j <= m; j++) {
            if (i == 1 || i == n || j == 1 || j == m) {
                cout << '*';
            } else {
                cout << ' ';
            }
        }
        cout << '\n';
    }
    return 0;
}