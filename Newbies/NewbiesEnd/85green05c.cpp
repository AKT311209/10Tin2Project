#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    unordered_map<char, int> freq;

    for (char c : s) {
        freq[c]++;
    }

    long long max_freq = 0;
    for (auto p : freq) {
        max_freq = max(max_freq, (long long) p.second);
    }

    long long remaining = s.size() - max_freq;

    if (max_freq - remaining > 1) {
        cout << max_freq - remaining -1;
    } else if (remaining - max_freq < 0) {
        cout << remaining - max_freq;
    } else {
        cout << 0;
    }
}