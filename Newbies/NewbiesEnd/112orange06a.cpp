// ...existing code...
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c, r;
    cin >> a >> b >> c >> r;

    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "No\n";
        return 0;
    }

    double s = (a + b + c) / 2.0;

    double area = sqrt(s * (s - a) * (s - b) * (s - c));

    // Calculate inradius
    double r_in = area / s;

    if (r <= r_in + 1e-9) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}