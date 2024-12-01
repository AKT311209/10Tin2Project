#include <bits/stdc++.h>

using namespace std;

long long countDigits(string n) {
    return n.length();
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    long long n, query;
    cin >> n >> query;

    string a[n+1];
    long long digits[n+1];

    for (long long i = 1; i <= n; i++) {
        cin >> a[i];
        digits[i] = countDigits(a[i]);
    }

    for (long long i = 0; i < query; i++) {
        string s;
        cin >> s;
        if (s == "update") {
            long long pos;
            string val;
            cin >> pos >> val;
            a[pos] = val;
            digits[pos] = countDigits(val);
        } else {
            long long l, r, k;
            cin >> l >> r >> k;
            int i = 0;
            while (digits[l] < k) {
                k -= digits[l];
                l++;
                if (l > r) {
                    cout << -1 << '\n';
                    i = 1;
                    break;
                }
            }
            if (i == 0) {
                cout << a[l][k-1] << '\n';
            }
        }
    }
}