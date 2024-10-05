#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    cout << sum;
}