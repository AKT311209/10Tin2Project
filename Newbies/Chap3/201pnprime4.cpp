#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, x;
    cin >> n;
    long long count = 0;
    for (long long i = 1; i <= n; i++)
    {
        cin >> x;
        int isprime = 1;
        if (x == 1 || x < 0)
        {
            isprime = 0;
            continue;
        }
        for (long long j = 2; j * j <= x; j++)
        {
            if (x % j == 0)
            {
                isprime = 0;
                break;
            }
        }
        if (isprime == 1)
        {
            count++;
        }
    }
    cout << count;
}
