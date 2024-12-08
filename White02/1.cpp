#include <bits/stdc++.h>

using namespace std;

int main() {
    long long x;
    cin >> x;

    // Triangle
    cout << fixed << setprecision(4) << (double)x*x*sqrt(3)/4.0 << '\n';

    // Square
    cout << fixed << setprecision(4) << (double)x*x << '\n';

    // Hexagon
    cout << fixed << setprecision(4) << (double)x*x*3*sqrt(3)/2.0 << '\n';

    // Octagon
    cout << fixed << setprecision(4) << (double)x*x*2*(1+sqrt(2)) << '\n';
}