#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long query;
    cin >> query;

    for (int i = 0; i < query; i++) {
        long long l, r;
        cin >> l >> r;
        long long left = ceil(sqrt(sqrt(l)));
        long long right = floor(sqrt(sqrt(r)));
        cout << right - left + 1 << "\n";
    }
}