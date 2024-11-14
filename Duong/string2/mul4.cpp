#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("mul4.inp", "r")) {
        freopen("mul4.inp", "r", stdin);
        freopen("mul4.out", "w", stdout);
    }
    string s;
    cin >> s;
    // Count 1-digits number
    int cnt = 0;
    cnt += count(s.begin(), s.end(), '0');
    cnt += count(s.begin(), s.end(), '4');
    cnt += count(s.begin(), s.end(), '8');
    // Count >= 2-digits number
    for (size_t i = 0; i <= s.size()-2; i++) {
        if (stoi(s.substr(i, 2)) % 4 == 0) {
            cnt++;
            cnt+=i;
        }
    }
    cout << cnt;
}