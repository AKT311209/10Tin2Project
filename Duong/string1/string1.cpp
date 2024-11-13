#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("string1.inp", "r")) {
        freopen("string1.inp", "r", stdin);
        freopen("string1.out", "w", stdout);
    }
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    cout << s;
}