#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("string12.inp", "r")) {
        freopen("string12.inp", "r", stdin);
        freopen("string12.out", "w", stdout);
    }
    vector<string> v;
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    while (ss >> word) {
        v.push_back(word);
    }
    sort(v.begin(), v.end());
    for (string word : v) {
        cout << word << '\n';
    }
}