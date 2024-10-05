#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, m, x;
    cin >> n >> m;
    long long sum = 0;
    for (long long i = 1; i <= n; i++) {
        cin >> x;
        sum += x;
    }
    cout << (abs(sum)-1)/abs(m)+1;
}