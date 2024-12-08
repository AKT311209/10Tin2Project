
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long l, r;
    long long x, y, z;
    long long a, b, c;
    cin >> l >> r;
    cin >> x >> y >> z;
    cin >> a >> b >> c;

    long long lcm = __gcd(x, __gcd(y, z));
    lcm = x * y * z / lcm;
    vector<long long> count(lcm, 0);
    for (long long i = 1; i <= lcm; i++)
    {
        if (((i % x + x) % x <= a) && ((i % y + y) % y <= b) && ((i % z + z) % z <= c))
        {
            count[i] = count[i - 1] + 1;
        }
        else
        {
            count[i] = count[i - 1];
        }
    }

    long long res = 0;
    // Start offset
    long long stoff = (l % lcm + lcm) % lcm + 1;
    long long left = stoff;
    long long right = min(lcm, r) + 1;
    res += count[right] - count[left - 1];

    // Full cycles
    long long fcycle = count[lcm - 1 + 1] * (r / lcm - l / lcm);
    res += fcycle;

    // End offset
    long long enoff = (r % lcm + lcm) % lcm + 1;
    if (fcycle!=0) res += count[enoff];
    cout << res;
}