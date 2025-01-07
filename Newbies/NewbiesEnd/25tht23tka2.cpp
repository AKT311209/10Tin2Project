#include <bits/stdc++.h>

using namespace std;

long long exEuclid(long long a, long long b, long long &x, long long &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    long long x1, y1;
    long long d = exEuclid(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

int main()
{
    long long m, a, b;
    cin >> m >> a >> b;
    if (a > b)
        swap(a, b);
    long long x, y;
    long long g = exEuclid(a, b, x, y);

    if (m % g != 0) {
        cout << "Khong duoc";
        return 0;
    }

    x *= m / g;
    y *= m / g;

    long long k1 = ceil((double)-x * g / b);
    long long k2 = floor((double)y * g / a);

    if (k1 > k2) {
        cout << "Khong duoc";
    } else {
        long long k = k1;
        long long nx = x + k * b / g;
        long long ny = y - k * a / g;
        cout << nx + ny;
    }

    return 0;
}