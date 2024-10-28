#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    string f1 = "A", f2 = "B";
    if (n == 1) {
        cout << f1;
    } else if (n == 2) {
        cout << f2;
    } else {
        for (long long i = 3; i <= n; ++i) {
            string f3 = f2+f1;
            f1 = f2;
            f2 = f3;
        }
        cout << f2;
    }
}