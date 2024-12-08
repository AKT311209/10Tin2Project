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

    long long count = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i] == b[j]) {
                count++;
            }
        }
    }

    cout << count;
}
