#include <bits/stdc++.h>

using namespace std;

long long sumdigits(long long n) {
    long long sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    long long a, b, k, p;

    cin >> a >> b >> k >> p;

    long long n = lcm(a, b);

    long long nump = n+k*p;

    cout << sumdigits(nump) << '\n';
}