#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("restr.inp", "r")) {
        freopen("restr.inp", "r", stdin);
        freopen("restr.out", "w", stdout);
    }
    int n;
    cin >> n;
    string s;
    cin >> s;
    array <int, 26> countchar;
    countchar.fill(0);
    for (size_t i = 0; i <= 25; i++) {
        cin >> countchar[i];
    }
    for (size_t i = 0; i < s.size(); i++) {
        if (s[i]!='?') countchar[s[i] - 'a']--;
        else continue;
        if (countchar[s[i] - 'a'] < 0) {
            cout << -1;
            return 0;
        }
    }

    string res;
    for (size_t i = 0; i < s.size(); i++) {
        if (s[i] == '?') {
            for (size_t j = 0; j <= 25; j++) {
                if (countchar[j] > 0) {
                    res += (char)(j + 'a');
                    countchar[j]--;
                    break;
                }
            }
        } else {
            res += s[i];
        }
    }
    cout << res;
}