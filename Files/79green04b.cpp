#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n < 6) {
        cout << -1 << "\n";
        return 0;
    }

    long long r = n % 3, k = 0;
    long long a, b, c;

    if (r == 0) {
        k = n / 3;
        a = k - 1; b = k; c = k + 1;
    } else if (r == 1) {
        k = (n - 1) / 3;
        a = k - 1; b = k; c = k + 2;
    } else {
        k = (n - 2) / 3;
        a = k - 1; b = k + 1; c = k + 2;
    }

    if (a <= 0 || b <= 0 || c <= 0) {
        cout << -1 << "\n";
        return 0;
    }

    vector<long long> ans = {a, b, c};
    sort(ans.begin(), ans.end());
    cout << ans[0] << " " << ans[1] << " " << ans[2] << "\n";
    return 0;
}