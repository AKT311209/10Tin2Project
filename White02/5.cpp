#include <bits/stdc++.h>

using namespace std;

int main() {
    long long l, r;
    long long x, y, z;
    long long a, b, c;
    cin >> l >> r;
    cin >> x >> y >> z;
    cin >> a >> b >> c;

    long long count = 0;
    for (long long i = l; i <= r; i++) {
        if (((i%x+x)%x <= a) && ((i%y+y)%y <= b) && ((i%z+z)%z <= c)) {
            count++;
        }
    }
    cout << count << '\n';
}