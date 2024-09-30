#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((max(a, b)==max(c, d)  && min(a, b) + min(c,d)==max(a, b))) {
        cout << 1;
    } else if (a==c || a==d || b==c || b==d)
    {
        cout << 0;
    } else
    {
        cout << -1;
    }
    
    
}
