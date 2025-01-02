#include <bits/stdc++.h>

using namespace std;

int main() {
    long long A, M, L, R;
    cin >> A >> M >> L >> R;

    // Move all points to 0-based
    L-=A;
    R-=A;

    long long count = (R/M) - (L-1)/M;

    cout << count;
}