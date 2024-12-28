#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("CAU3.inp", "r")) {
        freopen("CAU3.inp", "r", stdin);
        freopen("CAU3.out", "w", stdout);
    }
    ios::sync_with_stdio(0);
    cin.tie(0);
    char c;
    bool start = true;
    bool count = 0;
    long long rescount = 0;
    string s, res;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        c = s[i];
        if (start && (c == '_')) {
            rescount++;
            continue;
        } else {
            start = false;
            if (count == 0 && c == '_') {
                res += c;
                count = 1;
            } else if (count == 1 && c == '_') {
                rescount++;
                continue;
            } else if (count == 1 && c != '_') {
                count = 0;
                res+=c;
            } else {
                res+=c;
            }
        }
    }
    if (res[res.size()-1] == '_') {
        rescount++;
        res.pop_back();
    }
    cout << rescount;
}