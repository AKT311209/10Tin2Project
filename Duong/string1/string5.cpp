#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("string5.inp", "r")) {
        freopen("string5.inp", "r", stdin);
        freopen("string5.out", "w", stdout);
    }
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    cout << count(s.begin(), s.end(), ' ') + 1 << '\n';
    while (ss >> word) {
        cout << word << '\n';
    }
}