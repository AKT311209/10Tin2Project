#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    long long count = 0;
    for (int i = 97; i <= 122; i++) {
        char c = s[i];
        size_t found = s.find(c);
        if (found != string::npos) {
            if (s.find(c, found+1) == string::npos) {
                count++;
            }
        }
    }    bool isPrime = true;
    if (count == 0 || count == 1) {
        isPrime = false;
    } else {
        for (int i = 2; i <= count / 2; i++) {
            if (count % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}