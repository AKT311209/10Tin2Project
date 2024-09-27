#include <bits/stdc++.h>
using namespace std;
long long a, b, m;
int main()
{
    cin >> a >> b >> m;
    long long c = (long long)(a+b);
    cout << (long long)(c%m+m)%m;
    return 0;
}
