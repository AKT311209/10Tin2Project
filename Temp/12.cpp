#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, x, y;
    cin >> n >> x >> y;
    for (long long i = 1; i <= n; i++) {
        for (long long j = 1; j <= n; j++) {
            if (i-j==x-y || i+j==x+y) {
                cout << "◼";
            } else {
                cout << "◻";
            }
        }
        cout << '\n';
    }
    return 0; 
}