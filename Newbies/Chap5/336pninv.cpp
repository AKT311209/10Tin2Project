#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long a[n + 1];

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    long long count = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (a[j] > a[i]) {
                count++;
            }
        }
    }

    cout << count;
}