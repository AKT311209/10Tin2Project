#include <bits/stdc++.h>

using namespace std;

long long calcsumdigit(long long n)
{
    long long sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

long long compare(long long a, long long b)
{
    if ((calcsumdigit(a) > calcsumdigit(b)) || (calcsumdigit(a) == calcsumdigit(b) && (a < b)))
    {
        return a;
    }
    if (a == b)
        return -1;
    return b;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    if (fopen("sotot.inp", "r"))
    {
        freopen("sotot.inp", "r", stdin);
        freopen("sotot.out", "w", stdout);
    }
    long long m, n;
    cin >> m >> n;
    cout << compare(m, n);
    return 0;
}