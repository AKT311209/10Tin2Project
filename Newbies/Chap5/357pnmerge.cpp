#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    vector<long long> a(n*2);

    for (long long i = 0; i < n*2; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    for (long long i = 0; i < n*2; i++)
    {
        cout << a[i] << ' ';
    }
    return 0;
}