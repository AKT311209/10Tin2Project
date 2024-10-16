#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("tongchuso.inp", "r")) {
        freopen("tongchuso.inp", "r", stdin);
        freopen("tongchuso.out", "w", stdout);
    }
    long long n, sum = 0;
    cin >> n;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    cout << sum;
}