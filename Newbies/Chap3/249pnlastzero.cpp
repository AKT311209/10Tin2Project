#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    // Count the number of zeros at the end of n!;
    long long count2 = 0, count5 = 0;

    for (long long i = 2; i <= n; i *= 2) {
        count2 += n / i;
    }

    for (long long i = 5; i <= n; i *= 5) {
        count5 += n / i;
    }

    cout << min(count2, count5) << endl;
    return 0;
}
