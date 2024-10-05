#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, x, y;
    cin >> n;
    long long count = 0;
    for (long long i = 1; i <= n; i++) {
        cin >> x >> y;
        if (y - x >= 2) {
            count++;
        }
    }
    cout << count;
}
