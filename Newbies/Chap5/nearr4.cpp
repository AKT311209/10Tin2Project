#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long a[n+1];
    for (long long i = 1; i <= n; i++) {
        cin >> a[i];
    }

    vector<long long> res;
    res.push_back(0);
    for (long long i = 1; i <= (n+1)/2; i++) {
        res.push_back(a[i]);
        res.push_back(a[n-i+1]);
    }

    for (long long i = 1; i <= n; i++) {
        cout << res[i] << " ";
    }
}