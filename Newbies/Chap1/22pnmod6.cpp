#include <bits/stdc++.h>
using namespace std;
long long a, b, c, d,e, mod;
int main()
{
    cin >> a >> b >> c >> d >> e >> mod;
    a%=mod; b%=mod; c%=mod; d%=mod; e%=mod;
    long long r = 1;
    r = (r*a)%mod;
    r = (r*b)%mod;
    r = (r*c)%mod;
    r = (r*d)%mod;
    r = (r*e)%mod;
    cout << (r + mod)%mod;
    return 0;
}
