#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    cin >> n;
    long long res = 0, num;
    for (long long i = 0; i < n; i++) {
        cin >> num;
        res ^= num;
    }
    cout << res << "\n";
}