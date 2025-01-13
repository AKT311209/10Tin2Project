#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;
long long sumdigit(long long x) {
    if (x == 0) {
        return 0;
    }
    long long sum = 0;
    while (x > 0) {
        sum += x % 10;
        sum %= MOD;
        x /= 10;
    }
    return sum;
}

long long productdigit(long long x) {
    if (x == 0) {
        return 0;
    }
    long long product = 1;
    while (x > 0) {
        product *= x % 10;
        x /= 10;
    }
    return product;
}

int main() {
    long long repeats, x, sum, product;
    sum = 0; product = 1;
    cin >> repeats;
    for (long long i = 1; i <= repeats; i++) {
        cin >> x;
        x = abs(x);
        sum+=productdigit(x);
        product*=sumdigit(x)%MOD;
        product%=MOD;
    }
    cout << sum << ' ' << product;
}
