#include <bits/stdc++.h>

using namespace std;


int main() {
    double x, y;
    char p;
    cin >> x >> y >> p;
    switch (p)
    {
    case '+':
        cout << fixed << setprecision(2) << x+y;
        break;
    case '-':
        cout << fixed << setprecision(2) << x-y;
        break;
    case '*':
        cout << fixed << setprecision(2) << x*y;
        break;
    case '/':
        cout << fixed << setprecision(2) << x/y;
        break;    
    default:
        break;
    }
}
