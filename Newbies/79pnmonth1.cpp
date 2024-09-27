#include <bits/stdc++.h>

using namespace std;


int main() {
    long long a;
    cin >> a;
    if (a==2)
    {
        cout << 29;
    } else if (a>=8 && a%2==0)
    {
        cout << 31;
    } else if (a>=8 && a%2==1)
    {
        cout << 30;
    } else if (a<8 && a%2==1) {
        cout << 31;
    } else {
        cout << 30;
    }
    
    
    
}
