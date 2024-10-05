#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long count = 0;
    while (n > 0) {
        if (n % 2 == 1) {
            count++;
        }
        n /= 10;
    }
    cout << count;
}