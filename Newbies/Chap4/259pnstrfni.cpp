#include <bits/stdc++.h>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    size_t pos = s1.find("code");
    if (pos != s1.npos) {
        s1.insert(pos + 4, s2);
    }
    cout << s1;
}