#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("xk.inp", "r")) {
        freopen("xk.inp", "r", stdin);
        freopen("xk.out", "w", stdout);
    }

    long long x, k;
    cin >> x >> k;

    vector <int> steps;

    while (x !=1) {
        if (x % k != 0) {
            x++;
            steps.push_back(2);
        } else {
            x /= k;
            steps.push_back(1);
        }
    }
    cout << steps.size() << '\n';
    for (int i = 0; i < steps.size(); i++) {
        cout << steps[i] << ' ';
    }
}