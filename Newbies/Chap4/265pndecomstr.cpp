#include <bits/stdc++.h>

using namespace std;

int main() {
    string input;
    cin >> input;
    input = " " + input;
    string res;

    for (size_t i = 1; i < input.size(); i++) {
        char c = input[i];
        if (c >= '1' && c <= '9') {
            for (int j = 1; j < c - '0'; j++) {
                res += input[i + 1];
            }
        } else {
            res += c;
        }
    }
    cout << res;
        
}