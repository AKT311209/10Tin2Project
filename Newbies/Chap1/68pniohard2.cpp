#include <iostream>

using namespace std;

int main() {
    long long x, k;
    cin >> x >> k;

    long long line1, line2, line3, line4;

    line1 = x-x%k;
    line2 = x+(k-x%k)%k;
    line3 = (x-k)+(k-x%k)%k;
    line4 = (x+k)-x%k;

    cout << line1 << '\n';
    cout << line2 << '\n';
    cout << line3 << '\n';
    cout << line4 << '\n';
}
