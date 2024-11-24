#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("sseqdiv3.inp", "r")) {
        freopen("sseqdiv3.inp", "r", stdin);
        freopen("sseqdiv3.out", "w", stdout);
    }

    string s;
    cin >> s;
    
    int modsumdigits = 0;

    for (char c : s) {
        modsumdigits += (c - '0');
        modsumdigits %= 3;
    }

    vector<int> prefix(1, 0);
    for (int i = 0; i < s.size(); i++) {
        prefix.push_back(prefix[i] + (s[i] - '0'));
    }

    int count = 0;
    int total = modsumdigits % 3;
    vector<int> cnt(3, 0);
    cnt[0]++;
    int mod_prefix = 0;
    for (char c : s) {
        mod_prefix = (mod_prefix + (c - '0')) % 3;
        int need = ((mod_prefix - total + 3) % 3);
        count += cnt[need];
        cnt[mod_prefix]++;
    }
    if (modsumdigits % 3 != 0) {
        count--;
    }
    cout << count;
}