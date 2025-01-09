#include <bits/stdc++.h>

using namespace std;

int main() {
    long long N;
    cin >> N;

    long long res = 1;
    for (long long i = 1; i <= N; i++) {
        res *= i;
        while (res % 10 == 0) {
            res /= 10;
        }
        res %= 100;
    }
    cout << res%10;
}