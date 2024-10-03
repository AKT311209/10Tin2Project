#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1e9 + 7;
int main() {
    long long n;
    cin >> n;
    n %= MOD;
    long long result = (n * (n + 1)*(n-1)/3) % MOD; // 
    cout << result;
}