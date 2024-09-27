#include <bits/stdc++.h>
using namespace std;
long long a, b, c, mod;
int main()
{
    cin >> a >> b >> c >> mod;
    long long r = (long long)((a*b)%mod*c);
    cout << (r%mod+mod)%mod;
    return 0;
}
