#include <bits/stdc++.h>

using namespace std;

int main() {
    long long x;
    cin >> x;
    if (1<=x && x <=5) {
        cout << 100000*x;
    } else if (6<=x && x <=10)
    {
        cout << x*90000;
    } else if (11<=x && x<=20)
    {
        cout << x*85000;
    } else if (21<=x && x<=50)
    {
        cout << x*80000;
    } else if (51<=x && x<=100)
    {
        cout << x*72000;
    } else{
        cout << x*70000;
    }
    
    
    
    
}
