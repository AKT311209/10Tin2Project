#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, x, k;
    cin >> n >> k;
    long long evencount = 0;
    for (long long i = 1; i <= n; i++) {
        cin >> x;
        if (x%2 == 0) {
            evencount++;
        }
        if (evencount == k) {
            break;
        }
        cout << x << " ";
    }
    if (evencount == 1) {
        cout << -1;
    }
}
