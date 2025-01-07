#include <bits/stdc++.h>

using namespace std;

int main() {
    long long N;
    cin >> N;
    string s;
    cin >> s;

    for (char &c: s) {
        c = (c - 'a' - N + 26) % 26 + 'a';
    }

    cout << s;
}