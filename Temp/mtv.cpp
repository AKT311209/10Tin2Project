#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("mtv.inp", "r")) {
        freopen("mtv.inp", "r", stdin);
        freopen("mtv.out", "w", stdout);
    }
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    long long sum = 0;
    long long sumabove = 0;
    for(int i = 0; i < n; i++) {
        sum += a[i][i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            sumabove += a[i][j];
        }
    }
    cout << sum << '\n' << sumabove;
}