#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, x;
    cin >> n;
    // Count the number of consecutive alternate positive and negative numbers
    long long count = 0; long long maxcount = 0;
    int sign = 1; int prevsign = 1;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x==0) {
            count = 0;
            prevsign = 0;
            continue;
        }
        sign = 2*(x > 0) - 1;
        if (sign != prevsign) {
            count++;
        } else {
            count = 1;
        }
        prevsign = sign;

        maxcount = max(maxcount, count);
    }
    cout << maxcount;
}
