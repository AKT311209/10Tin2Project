#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    int a, b;
    getline(cin, s);
    cin >> a >> b;

    s = " "+s;
    for (int i = a; i <= b; i++) {
        if (s[i] >= 97 && s[i] <= 122) {
            s[i] = toupper(s[i]);
        } else {
            s[i] = tolower(s[i]);
        }
    }
    cout << s;
}