#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long base = sqrt(n);
    cout << base - (base * (base+1) > n);
}
