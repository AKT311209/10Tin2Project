#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    int a, b;
    cin >> s >> a >> b;

    s = " "+s;
    for (size_t i = 1; i < s.length(); i++) {
        if (a<=i && i<=b) {
            continue;
        }
        cout << s[i];
    }
}