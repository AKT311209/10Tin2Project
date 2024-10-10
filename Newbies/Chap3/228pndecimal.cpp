#include <bits/stdc++.h>

using namespace std;

int main() {
    string n;
    cin >> n;

    long long res = 0;
    long long base = 1;

    // binary to decimal
    for (int i = n.length() - 1; i >= 0; --i) {
        if (n[i] == '1') {
            res += base;
        }
        base *= 2;
    }
    cout << res;
    return 0;
}