#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    bool even = true;
    while (n > 0) {
        if (n % 2 == 1) {
            even = false;
            break;
        }
        n /= 10;
    }
    cout << (even ? "YES" : "NO");
}