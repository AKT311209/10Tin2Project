#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y;
    cin >> x >>y;
    switch(x) {
        case 2:
            if (y%4==0 && (y%100!=0 || y%400==0)) {
                cout << 29;
            } else {
                cout << 28;
            }
            break;
        case 4: case 6: case 9: case 11:
            cout << 30;
            break;
        default: 
            cout << 31;
            break;
    }
}
