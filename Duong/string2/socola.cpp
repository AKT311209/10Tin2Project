#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("socola.inp", "r")) {
        freopen("socola.inp", "r", stdin);
        freopen("socola.out", "w", stdout);
    }
    string s;
    cin >> s;
    long long product = 1;
    for (size_t i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            int j = i + 1;
            while (j < s.size() && s[j] != 'X') {
                j++;
            }
            if (j == s.size()) {
                break;
            }
            j--;
            product *= j - i + 1;
            i = j;
        }
    }
    cout << product;
}