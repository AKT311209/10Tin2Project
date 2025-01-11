#include <bits/stdc++.h>

using namespace std;

long long recur(long long n) {
    if (n == 1) return 1;
    else if (n % 2 == 0) return recur(n / 2) + 1;
    else return recur(n - 1) + recur(n + 1);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;
    cout << recur(n);
}