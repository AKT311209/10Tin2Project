#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    if (fopen("tbc.inp", "r")) {
        freopen("tbc.inp", "r", stdin);
        freopen("tbc.out", "w", stdout);
    }
    int repeats, n;
    cin >> repeats;
    long long sum = 0, count = 1;
    for (int i = 1; i <= repeats; i++) {
        cin >> n;
        cout << n*count-sum << ' ';
        sum += n*count-sum;
        count++;
    }
    return 0;
}