#include <bits/stdc++.h>
using namespace std;
int a, b;
int main()
{
    cin >> a >> b;
    int dev = gcd(a, b);
    cout << a/dev << ' ' << b/dev;
}
