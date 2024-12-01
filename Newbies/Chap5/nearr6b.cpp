#include <bits/stdc++.h>    

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long a[2*n+1];

    for (long long i = 1; i <= 2*n; i++) {
        cin >> a[i];
    }

    sort(a + 1, a + 2*n + 1);

    for (long long i = 1; i <= 2*n; i++) {
        cout << a[i] << " ";
    }
}