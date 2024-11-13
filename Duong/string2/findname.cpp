#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("findname.inp", "r")) {
        freopen("findname.inp", "r", stdin);
        freopen("findname.out", "w", stdout);
    }
    string s, result;
    char prev = ' ';
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (string("aeiouy").find(prev) != string::npos && s[i] == 'm') {
            prev = s[i];
            continue;
        }
        result += s[i];
        prev = s[i];
    }
    cout << result;
}