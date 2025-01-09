#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (auto &x : a)
        cin >> x;

    vector<vector<long long>> dcount(10, vector<long long>(10, 0));

    for (auto num : a)
    {
        long long pos = 0;
        while (num > 0 && pos < 10)
        {
            long long digit = num % 10;
            dcount[pos][digit]++;
            num /= 10;
            pos++;
        }
    }

    long long total = 0;
    for (auto counts : dcount)
    {
        for (auto cnt : counts)
        {
            if (cnt > 1)
            {
                total += (cnt * (cnt - 1)) / 2;
            }
        }
    }

    cout << total;
}