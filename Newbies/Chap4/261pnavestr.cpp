#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    long long sum = 0;
    for (char letter: s) {
        sum += (int)letter;
    }
    cout << fixed << setprecision(6) << (double)sum / s.size();
}