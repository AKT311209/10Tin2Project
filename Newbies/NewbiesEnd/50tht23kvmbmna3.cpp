#include <bits/stdc++.h>

using namespace std;

int main() {
    long long A, B, K;

    cin >> A >> B >> K;

    long long S = A*B;
    long long count2 = 0;
    long long count5 = 0;

    while (S % 2 == 0) {
        S /= 2;
        count2++;
    }

    while (S % 5 == 0) {
        S /= 5;
        count5++;
    }

    long long res = 1;
    for (long long i = count2; i < K; i++) {
        res *= 2;
    }

    for (long long i = count5; i < K; i++) {
        res *= 5;
    }

    cout << res;

}