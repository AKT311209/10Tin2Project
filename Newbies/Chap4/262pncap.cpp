#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    long long count = 0;
    for (char &letter: s) {
        if (int(letter) >= 97 && int(letter) <= 122) {
            count++;
            letter = toupper(letter);
        }
    }
    cout << count << '\n' << s;
}