#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    // Lowercase all characters
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] >= 65 && s[i] <= 90) {
            s[i] += 32;
        }
    }
    // Count the number of unique characters occuring only once
    long long count = 0;
    for (int i = 97; i <= 122; i++) {
        char c = i;
        size_t found = s.find(c);
        if (found != string::npos) {
            if (s.find(c, found+1) == string::npos) {
                count++;
            }
        }
    }     
    // Check if the count is prime
    bool isPrime = true;
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
    cout << (isPrime ? "YES" : "NO");
}