#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    long long countA = count(s.begin(), s.end(), 'A');
    long long countB = count(s.begin(), s.end(), 'B');
    long long countC = count(s.begin(), s.end(), 'C');

    if (countA%2+countB%2+countC%2 <= 1) {
        cout << 0;
    } else {
        cout << 1;
    }
}