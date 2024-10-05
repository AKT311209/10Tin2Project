#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, x;
    cin >> n;
    long long min = 1000000000;
    long long max = -1000000000;
    long long mincount = 0;
    long long maxcount = 0;
    for (long long i = 1; i <= n; i++) {
        cin >> x;
        if (x < min) {
            min = x;
            mincount = 1;
        } else if (x == min) {
            mincount++;
        }
        if (x > max) {
            max = x;
            maxcount = 1;
        } else if (x == max) {
            maxcount++;
        }
    }
    cout << mincount << " " << maxcount;
}