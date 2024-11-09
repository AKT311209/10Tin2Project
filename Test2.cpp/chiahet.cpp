#include <bits/stdc++.h>

using namespace std;

long long countmul(long long l, long long r, long long a) {
    long long left = ceil((double)l/a);
    long long right = (r/a);
    return (right - left) + 1;
}

int main()
{
    if (fopen("chiahet.inp", "r"))
    {
        freopen("chiahet.inp", "r", stdin);
        freopen("chiahet.out", "w", stdout);
    }
    long long l, r, x, y;
    cin >> l >> r >> x >> y;
    long long divx = countmul(l, r, x);
    long long divy = countmul(l, r, y);
    long long divxy = countmul(l, r, lcm(x, y));
    cout << divx + divy - divxy;
    return 0;

}