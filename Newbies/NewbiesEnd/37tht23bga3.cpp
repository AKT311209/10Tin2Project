#include <bits/stdc++.h>

using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
    long long count = (B - A + 1) + (D - C + 1);
    long long start = max(A, C);
    long long end = min(B, D);
    if (start <= end) {
        count -= 2 * (end - start + 1);
    }
    cout << count;
}