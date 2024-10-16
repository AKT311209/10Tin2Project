#include <bits/stdc++.h>

using namespace std;

int main()
{
    if (fopen("khuvuichoi.inp", "r"))
    {
        freopen("khuvuichoi.inp", "r", stdin);
        freopen("khuvuichoi.out", "w", stdout);
    }
    long long open, close, price;
    cin >> open >> close;
    open = max(open, 6LL);
    close = min(close, 22LL);
    price = 0;
    price += max(min((12 - open) * 6, (close - open) * 6), 0LL);
    price += max(min((close - 12) * 10, (close - open) * 10), 0LL);
    long long count = 4;
    if (close - open > 4)
    {
        price -= max(min((12 - open - 4) * 3, (close - open - 4) * 3), 0LL);
        count -= min(max((12 - open - 4) * 3, (close - open - 4) * 3), 0LL) /3;
        price -= max(min((close - 12 - 4) * 5, (close - open - 4) * 5), 0LL);
        count = 4 -count;
        price+= count*5;
    }
    cout << price;
}