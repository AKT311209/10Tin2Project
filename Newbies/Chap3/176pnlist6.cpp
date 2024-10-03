#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, x;
    cin >> n;
    long long sum = 0;
    for (long long i = 1; i <= n; i++)
    {
        cin >> x;
        if (i % 2 == 1)
        {
            sum += x;
        } else {
            sum -= x;
        }
    }
    cout << sum;
    return 0;
}