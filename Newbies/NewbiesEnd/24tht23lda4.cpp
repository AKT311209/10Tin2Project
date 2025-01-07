#include <bits/stdc++.h>

using namespace std;

int main() {
    long long A, R, C;
    cin >> A >> R >> C;

    long long T = ceil(sqrt(2*A));
    while (T*(T+1) >= 2*A) {
        T--;
    }
    long long prevmax = T*(T+1)/2;
    T++;
    if (T%2) {
        cout << T << " " << A-prevmax << '\n';
    } else {
        cout << T << " " << T+1-(A-prevmax) << '\n';
    }

    R--;
    long long maxR = R*(R+1)/2;
    if (R%2==0) {
        cout << maxR+C;
    } else {
        cout << maxR + (R+1)-C+1;
    }
}