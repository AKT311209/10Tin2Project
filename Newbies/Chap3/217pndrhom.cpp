#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    n = n/2+1;
    for (long long i = 1; i <= n; i++) {
        for (long long j = 1; j <= n-i; j++) {
            cout << ' ';
        }
        for (long long j = 1; j <= 2*i-1; j++) {
            if (j == 1 || j == 2*i-1) {
                cout << '*';
            } else {
                cout << ' ';
            }
        }
        cout << '\n';
    }
    for (long long i = n-1; i >= 1; i--) {
        for (long long j = 1; j <= n-i; j++) {
            cout << ' ';
        }
        for (long long j = 1; j <= 2*i-1; j++) {
            if (j == 1 || j == 2*i-1) {
                cout << '*';
            } else {
                cout << ' ';
            }
        }
        cout << '\n';
    }
}