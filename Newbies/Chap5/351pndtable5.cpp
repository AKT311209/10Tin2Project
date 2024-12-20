#include <bits/stdc++.h>

using namespace std;

int main() {
    long long m, n;
    cin >> m >> n;

    int num = 1;
    int a[m + 1][n + 1];
    for (int j = 1; j <= n; j++) {
        for (int i = 1; i <= m; i++) {
            a[i][j] = num;
            num++;
        }
    }

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
        
}