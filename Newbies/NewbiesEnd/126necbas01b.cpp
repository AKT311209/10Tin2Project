#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;

    vector<long long> a(n), b(n);

    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (long long i = 0; i < n; i++) {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    sort(b.begin(), b.end());
    b.erase(unique(b.begin(), b.end()), b.end());

    bool same = 1;
    if (a.size() != b.size()) {
        same = 0;
    } else {
        for (long long i = 0; i < a.size(); i++) {
            if (a[i] != b[i]) {
                same = 0;
                break;
            }
        }
    }

    cout << (same ? "YES" : "NO");
}