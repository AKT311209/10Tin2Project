#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, x, y;
    cin >> n >> x >> y;
    for (long long i = 1; i <= n; i++) {
        for (long long j = 1; j <= n; j++) {
            if ((abs(i-x)+abs(j-y))%3==0) {
                cout << "◼";
            } else {
                cout << "◻";
            }
        }
        cout << '\n';
    }
    return 0; 
}