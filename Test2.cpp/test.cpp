#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    stringstream ss(s);
    while (ss >> s) {
        cout << s << '\n';
    }
}