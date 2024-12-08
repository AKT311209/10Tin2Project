#include <bits/stdc++.h>

using namespace std;

long long countDevi(long long n)
{
    if (n == 0)
        return LLONG_MAX;
    bool flag = n>0;
    n = abs(n);
    long long count = 0;
    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0 && (i + n / i) % 2 != 0)
        {
            count += 2;
        }
    }
    return count;
}

int main()
{
    long long query;
    cin >> query;

    for (long long i = 0; i < query; i++)
    {
        long long n;
        cin >> n;
        long long result = countDevi(2 * n);
        if (result == LLONG_MAX)
        {
            cout << "∞ ";
        }
        else
        {
            cout << result << ' ';
        }
    }
}