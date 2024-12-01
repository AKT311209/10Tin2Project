#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, x;
    cin >> n;
    long long mark = 0; long long count = 0;
    long long maxcount = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x >0) {
            count++;
        } else {
            count = 0;
        }
        maxcount = max(maxcount, count);
    }
    cout << maxcount;
}
