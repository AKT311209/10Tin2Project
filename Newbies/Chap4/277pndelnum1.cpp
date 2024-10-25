#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    s = " " + s;

    string res = "";
    for (size_t i = 1; i < s.size(); i++) {
        if (! isdigit(s[i])) {
            res += s[i];
        }
    }
    cout << res;
}