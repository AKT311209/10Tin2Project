#include <bits/stdc++.h>    

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long a[n + 1];

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++) {
        int j;
        int res = -1;
        for (j = 1; j <= i; j++) {
            if (a[j] < a[i]) {
                res = j;
            }
        }
        cout << res << " ";
    }
}