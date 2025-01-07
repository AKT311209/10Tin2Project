#include <bits/stdc++.h>

using namespace std;

int main() {
    long long a, b, k;
    cin >> a >> b >> k;

    long long res = k*a;

    res = min(res, k/2*b+(k%2)*a);

    cout << res;
}