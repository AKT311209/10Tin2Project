#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, query;
    cin >> n >> query;

    vector<long long> a(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < query; i++)
    {
        long long l, r;
        cin >> l >> r;
        cout << *min_element(a.begin() + l, a.begin() + r + 1) << ' ' << *max_element(a.begin() + l, a.begin() + r + 1) << '\n';
    }
}