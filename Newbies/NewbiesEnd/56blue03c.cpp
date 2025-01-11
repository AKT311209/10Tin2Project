#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n, a, x, y;
    cin >> n >> a >> x >> y;

    long long ib = n / a;
    long long total = ib;
    long long bc = ib;

    while (bc >= x) {
        long long nb = (bc / x) * y;
        total += nb;
        bc = (bc % x) + nb;
    }

    cout << total;
}