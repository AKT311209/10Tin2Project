#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    int a, b;
    cin >> s >> a >> b;

    s = " "+s;
    s.erase(a, b - a + 1);
    cout << s;
}