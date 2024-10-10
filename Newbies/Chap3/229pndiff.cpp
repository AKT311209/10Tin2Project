#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k, prev, maxdiff = 0;
    cin >> n;
    for (long long i = 0; i < n; i++)
    {
        cin >> k;
        if (i==0) {
            prev = k;
            continue;
        } else {
            maxdiff = max(maxdiff, abs(prev - k));
            prev = k;
        }
    }
    cout << maxdiff;
}