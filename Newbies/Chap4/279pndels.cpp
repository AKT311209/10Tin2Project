#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    string result = "";
    for (size_t i = 0; i < s.size(); i++) {
        char c = s[i];
        if (result.find(c) == string::npos) {
            result += c;
        }
    }
    cout << result;

}