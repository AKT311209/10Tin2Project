#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, x;
    cin >> n;
    long long p = 1;
    for (long long i = 1; i <= n; i++) {
        cin >> x;
        p = abs((p * x)) % 10;
    }
    cout << p;
}