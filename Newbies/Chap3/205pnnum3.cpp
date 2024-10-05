#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long sum = 0;
    long long count = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
        count++;
    }
    cout << fixed << setprecision(2) << (double)sum / count;
}