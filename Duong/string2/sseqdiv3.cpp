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

    vector<int> prefix(s.size() + 2, 0);
    for (int i = 0; i < s.size(); i++) {
        prefix[i + 1] = prefix[i] + (s[i] - '0');
    }

    int count = 0;
    for (size_t i = 0; i < s.size(); i++) {
        for (size_t j = i + 1; j <= s.size(); j++) {
            int sum = prefix[j] - prefix[i];
            if ((modsumdigits-sum) % 3 == 0) {
                count++;
            }
        }
    }
    if (stoi(s) % 3 != 0) {
        count--;
    }
    cout << count;
}