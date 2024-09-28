#include <bits/stdc++.h>

using namespace std;

int main() {
    long long x;
    cin >> x;
    if (x==1) {
        cout << 10000;
    } else if (2<=x && x <=6)
    {
        cout << 10000 +(x-1)*8000;
    } else {
        cout << 10000 + 4*8000 + (x-5)*6000;
    }
    
}
