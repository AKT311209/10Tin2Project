#include <bits/stdc++.h>

using namespace std;

bool checkPalindrome(int k) {
    int t = 0, m = k;
    while (k > 0) {
        t = t * 10 + k % 10;
        k /= 10;
    }
    return t == m;
}

bool prime_factors(int n) {
    int d = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            d++;
            while (n % i == 0) {
                n /= i;
            }
        }
    }
    if (n > 1) {
        d++;
    }
    return d >= 3;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    if (fopen("sd.inp", "r"))
    {
        freopen("sd.inp", "r", stdin);
        freopen("sd.out", "w", stdout);
    }
    int l, r;
    cin >> l >> r;
    int count = 0;
    for (int i = l; i <= r; i++) {
        if (checkPalindrome(i) && prime_factors(i)) {
            count++;
        }
    }
    cout << count;
    return 0;
}