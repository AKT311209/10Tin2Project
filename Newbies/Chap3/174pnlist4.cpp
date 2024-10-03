#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, x;
    cin >> n;
    long long sumodd = 0;
    long long counteven = 0;
    for (long long i = 1; i <= n; i++) {
        cin >> x;
        if (x % 2 == 0) {
            counteven++;
        } else {
            sumodd += x;
        }
    }
    cout << counteven << " " << sumodd;
    return 0;
}