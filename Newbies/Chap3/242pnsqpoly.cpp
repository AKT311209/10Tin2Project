#include <bits/stdc++.h>

using namespace std;

int main() {
    double n, x, y, prevx, prevy;
    double temp, sum;
    cin >> n;
    cin >> prevx >> prevy;
    double firstx = prevx, firsty = prevy;
    sum = 0;
    for (int i = 1; i < n; i++) {
        cin >> x >> y;
        temp = (x - prevx) * (y+prevy) / 2.0;
        sum += temp;
        prevx = x;
        prevy = y;
    }
    temp = (firstx - prevx) * (firsty+prevy) / 2.0;
    sum += temp;
    sum = abs(sum);
    cout << fixed << setprecision(6) << sum;
    return 0;
}