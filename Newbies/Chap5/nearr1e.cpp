#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, q;
    cin >> n >> q;

    long long arr[n + 1];
    for (long long i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    vector <long long> prefix;
    prefix.push_back(0);
    for (long long i = 1; i <= n; i++)
    {
        prefix.push_back(prefix.back() + arr[i]);
    }
    for (long long i = 0; i < q; i++)
    {
        long long l, r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l - 1] << '\n';
    }       
}