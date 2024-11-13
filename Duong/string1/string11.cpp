#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("string11.inp", "r")) {
        freopen("string11.inp", "r", stdin);
        freopen("string11.out", "w", stdout);
    }
    string s;
    int countopen = 0;
    int countclose = 0;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            countopen++;
        } else if (s[i] == ')') {
            countclose++;
        }
        if (countclose > countopen) {
            cout << "NO" << '\n' << i;
            return 0;
        }
    }
    cout << "YES";
    return 0;
}