#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, x, y, k;
    k = 0;
    cin >> n >> x >> y >> k;
    for (long long i = 1; i <= n; i++) {
        // Left
        for (long long j = 1; j <= n; j++) {
            if (((i-j)%(k+1)+(k+1))%(k+1)==((x-y)%(k+1)+(k+1))%(k+1)){
                cout << "◼";
            } else {
                cout << "◻";
            }
        }
        cout << ' ';
        // Right
        for (long long j = 1; j <= n; j++) {
            if (((i+j)%(k+1)+(k+1))%(k+1)==((x+y)%(k+1)+(k+1))%(k+1)){
                cout << "◼";
            } else {
                cout << "◻";
            }
        }
        cout << '\n';
    }
    return 0; 
    
    
}