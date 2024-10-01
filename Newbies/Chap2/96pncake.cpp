#include <bits/stdc++.h>

using namespace std;

/// @brief 
/// @return 
int main() {
    long long x;
    cin >> x;
    switch (x) {
        case 1 ... 5:
            cout << 100000 * x;
            break;
        case 6 ... 10:
            cout << 90000 * x;
            break;
        case 11 ... 20:
            cout << 85000 * x;
            break;
        case 21 ... 50:
            cout << 80000 * x;
            break;
        case 51 ... 100:
            cout << 72000 * x;
            break;
        default:
            if (x > 100) {
                cout << 70000 * x;
            }
            break;
    }
    
    // Fix
    
    
}
