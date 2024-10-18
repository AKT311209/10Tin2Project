#include <bits/stdc++.h>

using namespace std;

bool check4(long long n) {
    while (n > 0) {
        if (n % 10 == 4) return true;
        n /= 10;
    }
    return false;
}

int main()
{
    if (fopen("insec.inp", "r"))
    {
        freopen("insec.inp", "r", stdin);
        freopen("insec.out", "w", stdout);
    }
    long long n;
    cin >> n;
    long long a = 0, b = 0;
    a = n / 2;
    b = (n + 1) / 2;
    while (check4(a) || check4(b))
    {
        a--;
        b++;
    }
    cout << a << " " << b;
}