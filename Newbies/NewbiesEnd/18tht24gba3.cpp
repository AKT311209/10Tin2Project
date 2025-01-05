#include <bits/stdc++.h>

using namespace std;

long long sum(long long n)
{
    long long total = 0;
    long long current = 1;
    long long next = 10;
    while (current <= n)
    {
        long long end = min(next - 1, n);
        long long count = end - current + 1;
        long long digits = to_string(current).length();
        total += count * digits * 45;
        current *= 10;
        next *= 10;
    }
    return total;
}

int main()
{
    long long n;
    cin >> n;
    cout << sum(n);
}