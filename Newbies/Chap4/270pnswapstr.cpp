#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        rotate(s.begin() + a, s.begin() + a + 1, s.begin() + b + 1);
    }
    cout << s;
}