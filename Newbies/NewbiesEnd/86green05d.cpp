#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long m, n;
    cin >> m >> n;

    char a[m + 1][n + 1];
    char firstnum = '!';
    char lastnum = '!';
    pair <long long, long long> firstpos;
    pair <long long, long long> lastpos;
    for (long long i = 1; i <= m; i++) {
        for (long long j = 1; j <= n; j++) {
            cin >> a[i][j];
            if (a[i][j] >= '0' && a[i][j] <= '9') {
                if (firstnum == '!') {
                    firstnum = a[i][j];
                    firstpos = make_pair(i, j);
                }
                lastnum = a[i][j];
                lastpos = make_pair(i, j);
            }
        }
    }
    if (lastpos == firstpos) {
        cout << a[firstpos.first][firstpos.second];
        return 0;
    }
    for (long long j = firstpos.second; j < lastpos.second; j++) {
        cout << a[firstpos.first][j];
    }
    for (long long i = firstpos.first; i < lastpos.first; i++) {
        cout << a[i][lastpos.second];
    }
    for (long long j = lastpos.second; j > firstpos.second; j--) {
        cout << a[lastpos.first][j];
    }
    for (long long i = lastpos.first; i > firstpos.first; i--) {
        cout << a[i][firstpos.second];
    }
}