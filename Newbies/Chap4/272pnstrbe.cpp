#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    s = " " + s;

    bool flag = true;
    for (size_t i = 1; i < s.size(); i++) {
        if (((i%2) && (!islower(s[i]))) || (((i%2 == 0) && (!isupper(s[i]))))) {
            flag = false;
            break;
        }
    }
    cout << (flag ? "YES" : "NO");
}