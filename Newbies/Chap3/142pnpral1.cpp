#include <bits/stdc++.h>

using namespace std;

int main() {
    char ch;
    cin >> ch;
    for (char i = 'a'; i <= ch; i++) {
        cout << i << ' ';
    }
    for (char i = 'z'; i > ch; i--) {
        cout << char(toupper(i)) << ' ';
    }
}