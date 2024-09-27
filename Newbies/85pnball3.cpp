#include <bits/stdc++.h>

using namespace std;


int main() {
    long long n;
    cin >> n;
    switch (n%5)
    {
    case 1:
        cout << "D";
        break;
    case 2:
        cout << "R";
        break;
    case 3:
        cout << "E";
        break;
    case 4:
        cout << "A";
        break;
    case 0:
        cout << "M";
        break;
    
    default:
        break;
    }
}
