#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("phantu.inp", "r")) {
        freopen("phantu.inp", "r", stdin);
        freopen("phantu.out", "w", stdout);
    }

    string s;
    cin >> s;

    int H = 1;
    int O = 16;
    int C = 12;
    int N = 14;

    long long total = 0;
    for (int i = 0; i < s.size(); i++) {
        long long base = s[i] == 'H' ? H : s[i] == 'O' ? O : s[i] == 'C' ? C : N;
        int count = 0;
        while (i + 1 < s.size() && isdigit(s[i + 1])) {
            count += s[i + 1] - '0';
            i++;
            if (isdigit(s[i + 1])) count *= 10;
        }
        if (count == 0) count = 1;
        total += base*count;
    }
    cout << total;
}