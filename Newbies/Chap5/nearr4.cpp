#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long a[n+1];
    for (long long i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (long long i = 1; i <= n/2; i++) {
        swap(a[i], a[n-i+1]);
    }

    for (long long i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
}