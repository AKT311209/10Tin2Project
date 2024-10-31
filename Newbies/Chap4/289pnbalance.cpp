#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, left, right;
    cin >> s;
    if (s.size() % 2 == 1) {
        cout << "NO";
        return 0;
    }
    left = s.substr(0, s.size() / 2);
    right = s.substr(s.size() / 2);
    for (char c = 'a'; c <= 'z'; ++c) {
        if ((left.find(c) == string::npos && right.find(c) != string::npos) || (left.find(c) != string::npos && right.find(c) == string::npos)) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}