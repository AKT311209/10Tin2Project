#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, q;
    cin >> n >> q;

    long long arr[n+1];
    for (long long i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    for (long long i = 1; i <= q; i++)
    {
        long long x;
        cin >> x;
        long long sum = 0;
        for (long long j = 1; j <=x; j++)
        {
            sum += arr[j];
        }
        cout << sum << '\n';
    }
}
