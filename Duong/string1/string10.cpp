#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("string10.inp", "r")) {
        freopen("string10.inp", "r", stdin);
        freopen("string10.out", "w", stdout);
    }
    string s, res;
    cin >> s;
    for (char c : s) {
        if (c >= '0' && c <= '9') {
            res += c;
        }
    }
    cout << res;
}