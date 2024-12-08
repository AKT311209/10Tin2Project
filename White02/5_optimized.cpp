
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long l, r;
    long long x, y, z;
    long long a, b, c;
    cin >> l >> r;
    cin >> x >> y >> z;
    cin >> a >> b >> c;

    long long lcm = __gcd(x, __gcd(y, z));
    lcm = x * y * z / lcm;

    long long count = 0;
    while (l % lcm != 0 && l <= r)
    {
        if (((l % x + x) % x <= a) && ((l % y + y) % y <= b) && ((l % z + z) % z <= c))
        {
            count++;
        }
        l++;
    }
    while (r % lcm != lcm - 1 && r >= l)
    {
        if (((r % x + x) % x <= a) && ((r % y + y) % y <= b) && ((r % z + z) % z <= c))
        {
            count++;
        }
        r--;
    }
    long long temp = 0;
    for (long long i = 1; i <= lcm; i++)
    {
        if (((i % x + x) % x <= a) && ((i % y + y) % y <= b) && ((i % z + z) % z <= c))
        {
            temp++;
        }
    }
    count += temp * (r-l+1) / lcm;;
    cout << count;
}