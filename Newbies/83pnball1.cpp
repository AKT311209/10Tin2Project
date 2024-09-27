#include <bits/stdc++.h>

using namespace std;


int main() {
    long long n;
    cin >> n;
    switch (n%3)
    {
    case 1:
        cout << "GREEN";
        break;
    case 2:
        cout << "RED";
        break;
    case 0:
        cout << "YELLOW";
    
    default:
        break;
    }
}
