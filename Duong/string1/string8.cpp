#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("string8.inp", "r")) {
        freopen("string8.inp", "r", stdin);
        freopen("string8.out", "w", stdout);
    }
    string s1, s2;
    cin >> s1 >> s2;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if (s1 == s2) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}