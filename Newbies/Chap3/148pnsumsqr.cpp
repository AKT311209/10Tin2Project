#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n;
    cin >> m >>n;
    long long sum = 0;
    for (int i = m; i <= n; i++) {
        sum += i * i;
    }
    cout << sum;
}