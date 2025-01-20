#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long num)
{
    if (num < 2)
        return false;
    for (long long i = 2; i * i <= num; ++i)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    long long n;
    cin >> n;
    const int required = 5;
    long long count = 0;
    long long product = 1;
    const long long MOD = 1000000007;
    long long current = n;
    while (count < required)
    {
        if (isPrime(current))
        {
            product = (product * current) % MOD;
            count++;
        }
        current++;
    }
    cout << product << "\n";
    return 0;
}