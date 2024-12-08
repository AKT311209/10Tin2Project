#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, s;
    cin >> n >> s;

    long long a[n + 1];
    
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    long long count = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            for (int k = j + 1; k <= n; k++) {
                if (a[i] + a[j] + a[k] >= s) {
                    count++;
                }
            }
        }
    }

    cout << count;
}