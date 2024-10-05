#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long min = 1000000000;
    long long max = -1000000000;
    while (n > 0) {
        if (n % 10 < min) {
            min = n % 10;
        }
        if (n % 10 > max) {
            max = n % 10;
        }
        n /= 10;
    }
    cout << min << " " << max;
}