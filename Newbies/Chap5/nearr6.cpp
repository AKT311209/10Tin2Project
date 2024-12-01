#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long a[n + 2];
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    long long x;
    cin >> x;
    a[n + 1] = x;
    sort(a + 1, a + n + 2);
    
    for (long long i = 1; i <= n + 1; i++)
    {
        cout << a[i] << " ";
    }
}

