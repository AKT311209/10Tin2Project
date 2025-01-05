#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long seq[n+1];
    seq[0] = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            seq[i] = seq[i-1] + 1;
        } else {
            seq[i] = seq[i-1] + 2;
        }
    }

    long long res = 0;
    for (int i = 1; i <= n; i++) {
        res += seq[i]*(seq[i]%2==0);
    }

    cout << res;
}