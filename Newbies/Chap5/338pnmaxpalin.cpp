#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long a[n + 2];
    a[0] = LLONG_MIN;
    a[n + 1] = LLONG_MAX;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    long long maxdis = -1;
    for (long long mid = 1; mid <= n; mid++) {
        long long dist = 0;
        while (a[mid - dist] == a[mid + dist]) {
            dist++;
        }
        maxdis = max(maxdis, dist - 1);
    }

    cout << 2 * maxdis + 1;
}