#include <bits/stdc++.h>

using namespace std;

int main() {
    int x;
    cin >> x;
    if (x < 50) {
        cout << 2*x;
    } else if (x>70){
        cout << 0;
    } else {
        cout << "OH NO";
    }
}
