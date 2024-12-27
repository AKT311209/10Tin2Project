#include <bits/stdc++.h>

using namespace std;

int main() {
    long long x, y, z;
    cin >> x >> y >> z;
    long long res = y+z-x;
    if (y>x || z > x) cout << -1;
    else cout << res;
}