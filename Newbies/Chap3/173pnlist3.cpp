#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, x;
    cin >> n;
    long long sum = 0;
    for (long long i = 1; i <= n; i++) {
        cin >> x;
        sum += x;
    }
    cout << sum;
    return 0;
}
        