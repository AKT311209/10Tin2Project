#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, x;
    cin >> n;

    if (n == 1) {
        cout << 1;
        return 0;
    }

    long long prev, count = 1, maxcount = 1;
    bool increasing;
    cin >> prev;

    for (int i = 1; i < n; i++) {
        cin >> x;
        if (x > prev) {
            if (i == 1 || increasing) {
                count++;
            } else {
                count = 2;
            }
            increasing = true;
        } else if (x < prev) {
            if (i == 1 || !increasing) {
                count++;
            } else {
                count = 2;
            }
            increasing = false;
        } else {
            count = 1;
        }
        maxcount = max(maxcount, count);
        prev = x;
    }

    cout << maxcount;
    return 0;
}
