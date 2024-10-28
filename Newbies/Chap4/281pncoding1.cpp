#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, x;
    string res;
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        cin >> x;
        if (x == 27)
            res += ' ';
        else
            res += char(x + 96);
    }
    cout << res;
}