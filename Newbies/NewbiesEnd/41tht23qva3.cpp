#include <bits/stdc++.h>

using namespace std;

int main() {
    long long A, B;
    cin >> A >> B;
    if ((A - 3*B)%2 != 0 || A-3*B < 0) {
        cout << "NO";
    } else {
        cout << (A - 3*B)/2;
    }
}