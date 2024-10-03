#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    int max = 0;
    for (long long i = 1; i <= sqrt(n); i++)
    {
        if (n%i == 0)
        {
            max = i;
        }
    }
    cout << max << ' ' << n/max;
}