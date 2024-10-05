#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, x;
    cin >> n;
    long long min = 1000000000;
    long long max = -1000000000;
    long long secondmin = 1000000000;
    long long secondmax = -1000000000;
    if (n == 1) {
        cin >> x;
        cout << x << " " << x;
        return 0;
    }
    for (long long i = 1; i <= n; i++) {
        cin >> x;
        if (x <= min) {
            secondmin = min;
            min = x;
        } else if (x < secondmin) {
            secondmin = x;
        }
        if (x >= max) {
            secondmax = max;
            max = x;
        } else if (x > secondmax) {
            secondmax = x;
        }
    }
    cout << secondmin << " " << secondmax;    
} 