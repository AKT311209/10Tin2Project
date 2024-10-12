#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    // Count the number of digits of all numbers from 1 to n

    long long count = 0;
    for (long long i = 1; i <= n; i++) {
        count += log10(i) + 1;
    }
    cout << count;
    return 0;
}