#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, q;
    cin >> n >> q;

    vector<long long> requests;
    long long sum = 0;

    for (long long i = 0; i < q; i++)
    {
        long long type;
        cin >> type;
        if (type == 1)
        {
            long long x;
            cin >> x;
            requests.push_back(x);
        }
        else
        {
            long long x, y;
            cin >> x >> y;
            sum = 0;
            for (auto a : requests)
            {
                if (a > y)
                {
                    continue;
                }
                if (a <= x)
                {
                    long long m = x - a + 1;
                    long long val = y - a + 1;
                    long long cnt = y - x + 1;
                    sum += cnt * (m + val) / 2;
                }
                else
                {
                    long long m = 1;
                    long long val = y - a + 1;
                    sum += (val * (m + val)) / 2;
                }
            }
            cout << sum << "\n";
        }
    }
}