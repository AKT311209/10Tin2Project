#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("demcp.inp", "r")) {
        freopen("demcp.inp", "r", stdin);
        freopen("demcp.out", "w", stdout);
    }
    long long m, n;
    cin >> m >> n;

    // Find the square num >= m
    long long a = ceil(sqrt(m));

    // Find the square num <= n
    long long b = floor(sqrt(n));

    cout << b - a + 1;
}
