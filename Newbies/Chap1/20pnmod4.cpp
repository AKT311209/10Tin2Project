#include <bits/stdc++.h>
using namespace std;
int a, b, c, d, mod;
int main()
{
    cin >> a >> b >> c >> d >> mod;
    int r = (a+b)*(c+d);
    cout << (r%mod+mod)%mod;
    return 0;
}
