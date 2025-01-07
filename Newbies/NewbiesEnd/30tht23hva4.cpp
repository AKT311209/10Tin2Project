#include <bits/stdc++.h>

using namespace std;

int main() {
    long long a, n, k;
    cin >> a >> n >> k;

    cout << a*n+k*(n*(n-1)/2);
}