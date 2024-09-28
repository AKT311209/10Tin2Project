#include <bits/stdc++.h>

using namespace std;

int main() {
    char x;
    cin >> x;
    int res = x;
    if ((65<= res && res <=90)||(97 <= res && res <=122)){
        cout << "Letter";
    } else if (48 <=res && res <=57) {
        cout << "Number";
    } else {
        cout << "Special";
    }
}
