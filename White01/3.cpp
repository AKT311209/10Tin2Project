#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    for (long long i = 1; i <= n; i++) {
        for (long long j = 1; j <= n; j++) {
            if (i>k && i<n-k+1 && j>k && j<n-k+1) {
                cout << "◻";
            } else {
                cout << "◼";
            }
        }
        cout << '\n';
    }
    return 0; 
}