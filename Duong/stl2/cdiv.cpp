#include <bits/stdc++.h>

using namespace std;

int main()
{
    if (fopen("cdiv.inp", "r"))
    {
        freopen("cdiv.inp", "r", stdin);
        freopen("cdiv.out", "w", stdout);
    }

    long long n;
    cin >> n;

    vector<long long> div0, div2, div1;

    for (long long i = 1; i <= n; i++)
    {
        long long x;
        cin >> x;
        if (x % 3 == 0)
        {
            div0.push_back(x);
        }
        else if (x % 3 == 1)
        {
            div1.push_back(x);
        }
        else
        {
            div2.push_back(x);
        }
    }

    long long count = 0;
    count += div0.size() * (div0.size() - 1) / 2;
    count += div1.size() * div2.size();
    cout << count;
}