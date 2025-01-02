#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, d;
    cin >> n >> d;

    long long first = (d == 0) ? 10 : d;
    if (first > n)
    {
        cout << 0;
        return 0;
    }

    long long count = (n - first) / 10 + 1;
    long long sum = count * first + 10 * (count * (count - 1)) / 2;
    cout << sum;

}