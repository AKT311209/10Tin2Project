#include <bits/stdc++.h>

using namespace std;


long long sumdiv(long long s) {
    long long res = 0;
    for (long long i = 1; i <= sqrt(s); i++) {
        if (s % i == 0) {
            if ((s / i == i) || (i == 1)) {
                res += i;
            } else {
                res += i + s / i;
            }
        }
    }
    return res;
}
bool check(long long n) {
    if (sumdiv(n) > n) {
        return true;
    }
    return false;
}

int main() {
    if (fopen("sd.inp", "r")) {
        freopen("sd.inp", "r", stdin);
        freopen("sd.out", "w", stdout);
    }
    long long m, n;
    cin >> m >> n;
    long long count = 0;
    for (long long i = m; i <= n; i++) {
        if (check(i)) {
            count++;
        }
    }
    cout << count;
}

