#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long res = 1;
    for (int i = 2; i <= n; i++) {
        res *= i;
    }
    cout << res;
    
}