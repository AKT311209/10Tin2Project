#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;

    // Finding 2^k <= n
    long long k = 0;
    while (pow(2, k) <= n) {
        k++;
    }
    // Convert n to binary
    string binary = "";
    for (long long i = k - 1; i >= 0; i--) {
        if (n >= pow(2, i)) {
            binary += "1";
            n -= pow(2, i);
        } else {
            binary += "0";
        }
    }
    cout << binary;
}