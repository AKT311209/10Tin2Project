#include <iostream>

using namespace std;

int main() {
    long double a, b, c, d, e, f, g, h, i;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;

    int res = 0;

    // Calculate averages for elements at the corners
    res += (a >= (b + d + e) / 3);
    res += (c >= (b + e + f) / 3);
    res += (g >= (d + e + h) / 3);
    res += (i >= (e + f + h) / 3);

    // Calculate averages for elements at the edges
    res += (b >= (a + d + e + f + c) / 5);
    res += (f >= (b + c + e + h + i) / 5);
    res += (d >= (a + b + e + h + g) / 5);
    res += (h >= (d + e + f + g + i) / 5);

    // Calculate averages for elements in the middle
    res += (e >= (a + b + c + d + f + g + h + i) / 8);

    cout << res;

    return 0;
}
