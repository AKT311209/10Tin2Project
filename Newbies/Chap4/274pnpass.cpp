#include <bits/stdc++.h>

using namespace std;

bool checkspace(string s) {
    for (size_t i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            return true;
        }
    }
    return false;
}

bool checkstrong(string s) {
    int countlower = 0, countupper = 0, countnumber = 0;
    for (size_t i = 0; i < s.size(); i++) {
        char c = s[i];
        if (islower(c)) {
            countlower++;
        } else if (isupper(c)) {
            countupper++;
        } else if (isdigit(c)) {
            countnumber++;
        }
    }
    return countlower > 0 && countupper > 0 && countnumber > 0;
}
int main() {
    string s;
    getline(cin, s);

    if (s.size() < 5 || checkspace(s)) {
        cout << "Invalid";
        return 0;
    }

    if (s.size() >= 8 && checkstrong(s)) {
        cout << "Strong";
    } else {
        cout << "Weak";
    }
}