#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long f1 = 1, f2 = 1, temp;

    if (n == 1 || n == 2)
    {
        cout << 2;
    }
    else
    {
        while (f2 <= n)
        {
            temp = f2;
            f2 = f1 + f2;
            f1 = temp;
        }
        cout << f1;
    }
}
