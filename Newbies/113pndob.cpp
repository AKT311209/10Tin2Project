#include <bits/stdc++.h>

using namespace std;

int main() {
    int a1, b1, c1, a2, b2, c2;

    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

    if (c1 != c2) {
        cout << (c1 < c2 ? 1 : 2);
    } else if (b1 != b2) {
        cout << (b1 < b2 ? 1 : 2);
    } else {
        cout << (a1 < a2 ? 1 : 2);
    }

    return 0;
}
