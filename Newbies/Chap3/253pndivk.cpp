#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    
    // Find total number of divisors of n
    long long num = 0;
    for (long long i = 1; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            if (i * i == n)
            {
                num++;
            }
            else
            {
                num += 2;
            }
        }
    }

    // Find kth divisor
    if (k > num)
    {
        cout << -1;
        return 0;
    } else if (k <= (num + 1) / 2) {  // kth divisor is less than or equal to n/2
        long long j = 1;
        while (k > 0)
        {
            if (n % j == 0)
            {
                k--;
                if (k == 0)
                {
                    cout << j;
                    return 0;
                }
            }
            j++;
        }
    } else {  // kth divisor is greater than n/2
        k = (num + (num + 1) / 2) - k - (num + 1) / 2 + 1;  // kth divisor from the end
        long long i = 1; 
        while (k > 0)
        {
            if (n % i == 0)
            {
                k--;
                if (k == 0)
                {
                    cout << n / i;
                    return 0;
                }
            }
            i++;
        }
    }
}