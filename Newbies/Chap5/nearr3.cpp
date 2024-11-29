#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long a[n+1];
    for (long long i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (long long i = 1; i <= n; i+=2) {
        cout << a[i] << " ";
    }
    cout << "\n";
    for (long long i = 2; i <= n; i+=2) {
        cout << a[i] << " ";
    }
}