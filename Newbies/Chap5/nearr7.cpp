#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long a[n + 1];
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    long long status = 1;
    for (long long i = 1; i <= n; i++)
    {
        if (a[i] <= 0)
        {
            status = 0;
            break;
        }
    }

    cout << status;
}