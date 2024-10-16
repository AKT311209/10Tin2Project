#include <bits/stdc++.h>

using namespace std;

double power(double x, long long y) {
    double res = 1;
    for (long long i = 0; i < y; i++) {
        res *= x;
    }
    return res;
}
int main() {
    long long m, n, p;
    double a, b, c;
    cin >> a >> b >> c >> m >> n >> p;
    cout << power(a, m) + power(b, n) + power(c, p);
}