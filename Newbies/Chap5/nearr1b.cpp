#include <bits/stdc++.h>

using namespace std;

int main() {
    long long m;
    cin >> m;
    long long arr[m+1];

    for (long long i = 1; i <= m; i++)
    {
        cin >> arr[i];
    }

    long long k;
    cin >> k;
    cout << accumulate(arr + 1, arr + k + 1, 0LL) << ' ';
    cout << accumulate(arr + k, arr+m+1, 0LL);
}