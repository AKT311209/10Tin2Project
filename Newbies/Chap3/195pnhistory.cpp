#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, x;
    cin >> n;
    for (long long i = 1; i <= n; i++) {
        cin >> x;
        if (x<2000) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}