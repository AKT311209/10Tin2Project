#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n >= 0)
    {
        if (((int(round(sqrt(n)))) * (int(round(sqrt(n)))) == n) && (((int(round(cbrt(n)))) * (int(round(cbrt(n)))) *  (int(round(cbrt(n))))== n)))
        {
            cout << 6;
        } else if ((int(round(sqrt(n)))) * (int(round(sqrt(n)))) == n)
        {
            cout << 2;
        } else if ((((int(round(cbrt(n)))) * (int(round(cbrt(n)))) *  (int(round(cbrt(n))))== n)))
        {
            cout << 3;
        } else {
            cout << 0;
        }
        
    } else
    {
        if ((((int(round(cbrt(n)))) * (int(round(cbrt(n)))) *  (int(round(cbrt(n))))== n))) {
            cout << 3;
        } else
        {
            cout << 0;
        }
        
    }
    
}
