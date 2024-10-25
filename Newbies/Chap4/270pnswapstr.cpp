#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int n;
    cin >> n;
    s = " " + s;
    for (int i = 1; i <= n; i++) {
        int a, b;
        cin >> a >> b;
        string sub = s.substr(a, b - a + 1);
        s.erase(a, b - a + 1);
        s.insert(1, sub);
    }
    cout << s;
}