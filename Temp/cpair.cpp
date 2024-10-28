#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("cpair.inp", "r")) {
        freopen("cpair.inp", "r", stdin);
        freopen("cpair.out", "w", stdout);
    }
    long long m;
    cin >> m;
    vector <long long> odd;
    vector <long long> even;

    for (long long i = 0; i < m; i++) {
        long long x;
        cin >> x;
        if (x % 2 == 0) {
            even.push_back(x);
        } else {
            odd.push_back(x);
        }
    }

    long long odds = odd.size();
    long long evens = even.size();

    cout << odds*(odds-1)/2 + evens*(evens-1)/2;
    return 0;
}