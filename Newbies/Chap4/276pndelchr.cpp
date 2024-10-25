#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    s = " " + s;

    string res = "";
    for (size_t i = 1; i < s.size(); i++) {
        if (i % n != 0) {
            res += s[i];
        }
    }
    cout << res;
}