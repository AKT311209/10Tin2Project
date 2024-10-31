#include <bits/stdc++.h>

using namespace std;

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    long long count = 0;
    for (int i = 0; i<256 ; i++) {
        if (s1.find(i) != string::npos && s2.find(i) != string::npos) {
            count++;
        }
    }
    cout << count;
    return 0;
}