#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("string7.inp", "r")) {
        freopen("string7.inp", "r", stdin);
        freopen("string7.out", "w", stdout);
    }
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    while (ss >> word) {
        cout << word << ' ';
    }
}