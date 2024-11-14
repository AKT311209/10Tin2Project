#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("div10.inp", "r")) {
        freopen("div10.inp", "r", stdin);
        freopen("div10.out", "w", stdout);
    }
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    int lastchar = int(s[0] - '0');
    if (lastchar == 0) {
        cout << 1;
    } else if (lastchar == 5) {
        cout << 2;
    } else if (lastchar % 2 == 0) {
        cout << 5;
    } else {
        cout << 10;
    }
}