#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int num;
    cin >> num;
    for (int i=1; i<=num; i++) {
        int count = 0;
        char c;
        cin >> c;
        for (size_t j = 0; j < s.size(); j++) {
            if (s[j] == c) {
                count++;
            }
        }
        cout << count << '\n';
    }
}
