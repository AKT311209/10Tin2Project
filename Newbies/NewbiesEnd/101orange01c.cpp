#include <bits/stdc++.h>

using namespace std;

char alphamove(char s, long long i) {
    if (isupper(s)) {
        return ((s - 'A' + i) % 26 + 26)%26 + 'A';
    } else {
        return ((s - 'a' + i) % 26 + 26)%26 + 'a';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;

    string res;
    s = ' ' + s;

    for (long long i = 1; i < s.size(); i++) {
        if (i%2 == 1) {
            res += alphamove(s[i], i);
        } else {
            res += alphamove(s[i], -i);
        }
    }

    cout << res << "\n";
}