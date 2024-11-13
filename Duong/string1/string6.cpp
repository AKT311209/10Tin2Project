#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("string6.inp", "r")) {
        freopen("string6.inp", "r", stdin);
        freopen("string6.out", "w", stdout);
    }
    string s;
    getline(cin, s);
    string s2 = s;
    reverse(s2.begin(), s2.end());
    if (s == s2) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}