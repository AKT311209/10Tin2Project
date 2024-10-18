#include <bits/stdc++.h>

using namespace std;

int main()
{
    if (fopen("csc.inp", "r"))
    {
        freopen("csc.inp", "r", stdin);
        freopen("csc.out", "w", stdout);
    }
    long long n;
    cin >> n;
    long long res = 0;
    if (n <= 100)
    {
        res = n * 650;
    }
    else if (n <= 150)
    {
        res = 100 * 650 + (n - 100) * 1250;
    }
    else if (n <= 200)
    {
        res = 100 * 650 + 50 * 1250 + (n - 150) * 1580;
    }
    else
    {
        res = 100 * 650 + 50 * 1250 + 50 * 1580 + (n - 200) * 1790;
    }
    double finalres = res * 1.1;
    cout << fixed << setprecision(2) << finalres;
}
