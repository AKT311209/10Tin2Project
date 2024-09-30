#include <bits/stdc++.h>

using namespace std;

int main()
{
    if (fopen("loop6.inp", "r")) {
        freopen("loop6.inp", "r", stdin);
        freopen("loop6.out", "w", stdout);
    }
    long a, b;
    cin >> a >> b;
    cout << gcd(a, b) << '\n' << lcm(a, b);
}
