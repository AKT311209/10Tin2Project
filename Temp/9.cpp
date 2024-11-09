#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, k, x, y;
    cin >> n >> x >> y;
    k = 2;

    int center = (n+1)/2;
    int horizontal = center - x;
    int vertical = center - y;
    for (long long i = 1+horizontal; i <= n+horizontal; i++) {
        for (long long j = 1+vertical; j <= n+vertical; j++) {
            if ((center+1 -min({i, j, n-i+1, n-j+1})) % k == 0) {
                cout << "◻";
            } else {
                cout << "◼";
            }
        }
        cout << '\n';
    }
    return 0; 
}