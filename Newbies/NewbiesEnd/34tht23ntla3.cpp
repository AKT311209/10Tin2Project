#include <bits/stdc++.h>

using namespace std;

int main() {
    int M, N;
    cin >> M >> N;
    long long count = 0;
    for (int size = 1; size <= min(M, N); size++) {
        count += (M - size + 1) * (N - size + 1);
    }
    cout << count;
}