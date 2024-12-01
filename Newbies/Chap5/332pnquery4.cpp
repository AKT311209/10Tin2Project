#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, query;
    cin >> n >> query;

    vector<long long> a(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    
    vector<long long> diff(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        diff[i] = a[i] - a[i - 1];
    }

    for (int i = 0; i < query; i++) {
        long long l, r;
        cin >> l >> r;
        diff[l] += 1;
        diff[r + 1] -= 1;
    }

    for (int i = 1; i <= n; i++) {
        diff[i] += diff[i - 1];
    }

    for (int i = 1; i <= n; i++) {
        cout << diff[i] << " ";
    }
}