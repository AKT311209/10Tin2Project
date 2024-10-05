#include <bits/stdc++.h>

using namespace std;

int main() {
    double n, x;
    long long sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        sum += x;
    }
    if ((double)sum/n >=8.0) {
        cout << "YES";   
    } else {
        cout << "NO";
    }
}
