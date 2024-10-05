#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    int count = 0;
    int prime = 0;
    if (n == 1) {
        cout << 0;
        return 0;
    }
    for (long long i = 2; i<=n; i++) {
        prime = 1;
        for (long long j = 2; j*j <= i; j++) {
            if (i%j == 0) {
                prime = 0;
                break;
            }
        }
        if (prime == 1) {
            count++;
        }
    }
    cout << count;
}