#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    cout << min(a, min(b, min(c, min(d, e)))) << ' ' << max(a, max(b, max(c, max(d, e))));
}
