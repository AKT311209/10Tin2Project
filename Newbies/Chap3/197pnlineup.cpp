#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, x;
    cin >> n;
    long long previous = 0;
    for (long long i = 1; i <= n; i++) {
        cin >> x;
        if (x < previous) {
            cout << "NO";
            return 0;
        }
        previous = x;
    }
    cout << "YES";
}