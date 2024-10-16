#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    int count = 1;
    while (cin >> s) {
        if (count == n) {
            cout << s << '\n';
            break;
        }
        count++;
    }
}