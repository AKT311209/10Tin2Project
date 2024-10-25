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
        swap(s[a], s[b]);
    }
    cout << s;
}