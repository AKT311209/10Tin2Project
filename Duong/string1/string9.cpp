#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("string9.inp", "r")) {
        freopen("string9.inp", "r", stdin);
        freopen("string9.out", "w", stdout);
    }
    string s;
    cin >> s;
    int count = 0;

    for (char c = 'a'; c <= 'z'; c++) {
        if (s.find(c) != string::npos) {
            count++;
        }
    }
    for (char c = '0'; c <= '9'; c++) {
        if (s.find(c) != string::npos) {
            count++;
        }
    }
    cout << count;
}