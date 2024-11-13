#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("string4.inp", "r")) {
        freopen("string4.inp", "r", stdin);
        freopen("string4.out", "w", stdout);
    }
    string s;
    getline(cin, s);
    int count = 0;
    // List all 'a' in the string
    for (size_t i = 0; i < s.size(); i++) {
        if (s[i] == 'a') {
            cout << i << ' ';
            count++;
        }
    }
    cout << '\n' << count;
}
