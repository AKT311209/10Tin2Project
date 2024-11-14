#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("cpstr.inp", "r")) {
        freopen("cpstr.inp", "r", stdin);
        freopen("cpstr.out", "w", stdout);
    }
    string s;
    cin >> s;
    // Compress string
    string res;
    for (size_t i = (s.size())/2; i>=1; i--) {
        string temp = s.substr(0, i);
        bool flag = true;
        for (size_t j = i; j <= s.size()+i; j+=i) {
            string s1 = s.substr(j-i, i);
            if (s1.empty()) {
                break;
            }
            if (temp != s1) {
                flag = false;
                break;
            }
        }
        if (!flag) {
            continue;
        }
        if (temp[0]>res[0]) res = to_string(s.size()/temp.size()) + temp;
    }
    if (res.empty()) res = "1" + s;
    cout << res;
}