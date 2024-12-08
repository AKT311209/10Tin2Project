#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long a[n + 1];
    long long b[n + 1];

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }

    for (int i = 1; i <= n; i++) {
        long long maxsum = -1;
        for (int j = 1; j <= i; j++) {
            for (int k = j; k <= i; k++) {
                maxsum = max(maxsum, a[j] + b[k]);
            }
        }
        cout << maxsum << ' ';
    }
}