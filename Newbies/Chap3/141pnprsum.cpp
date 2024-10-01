#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long sum1 = 1;
    for (int i =0; i<n; i++) {
        sum1+=i;
        cout << sum1 +i << ' ';
    }
}