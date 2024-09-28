#include <bits/stdc++.h>

using namespace std;

int main() {
    long long a, b, n;
    cin >> a >> b >> n;
    cout << (long long)((n/2)*b + (n-n/2)*a);
}
