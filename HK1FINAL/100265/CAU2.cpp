#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    if (fopen("CAU2.inp", "r")) {
        freopen("CAU2.inp", "r", stdin);
        freopen("CAU2.out", "w", stdout);
    }

    long long l, r, x, y;
    cin >> l >> r >> x >> y;

    long long leftx = ((l-1)/x+1)*x;
    long long rightx = (r/x)*x;
    long long lefty = ((l-1)/y+1)*y;
    long long righty = (r/y)*y;
    long long lcm = x*y/gcd(x, y);
    long long leftlcm = ((l-1)/lcm+1)*lcm;
    long long rightlcm = (r/lcm)*lcm;

    long long sumdiv = (rightx+leftx)*((rightx-leftx)/x+1)/2 + (righty+lefty)*((righty-lefty)/y+1)/2 - (rightlcm+leftlcm)*((rightlcm-leftlcm)/(x*y)+1)/2;
    long long sumtotal = (r+l)*(r-l+1)/2;
    long long sum = sumtotal - sumdiv;
    cout << sum;
}