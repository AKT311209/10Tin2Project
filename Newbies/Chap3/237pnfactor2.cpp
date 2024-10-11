#include <bits/stdc++.h>

using namespace std;

int main() {
    long long s, temp, n, mod;
    cin >> n >> mod;
    s = 0;
    temp = 1;
    for (int i = 1; i <=n; i++) {
        temp *= i;
        temp %= mod;
        s += temp;
        s %= mod;
    }
    cout << s;
}