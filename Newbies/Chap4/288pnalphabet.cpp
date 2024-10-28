#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    for (char c = 'a'; c <= 'z'; ++c) {
        if (s.find(c) == string::npos && s.find(toupper(c)) == string::npos) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}