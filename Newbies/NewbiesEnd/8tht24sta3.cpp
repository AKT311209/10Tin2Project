#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long count8 = n / 7;
    long long remain = n % 7;
    if (n % 7 == 1)
    {
        count8 -= 1;
        remain = 8;
        cout << 10;
        for (long long i = 1; i <= count8; i++)
        {
            cout << 8;
        }
    }
    else if (remain == 0)
    {
        for (long long i = 1; i <= count8; i++)
        {
            cout << 8;
        }
    }
    else
    {
        if (remain == 2)
            cout << 1;
        else if (remain == 3)
        {
            cout << 22;
            count8--;
        }
        else if (remain == 4)
        {
            cout << 20;
            count8--;
        }
        else if (remain == 5)
            cout << 2;
        else
            cout << 6;
        for (long long i = 1; i <= count8; i++)
        {
            cout << 8;
        }
    }
    cout << "\n";

    while (n >= 3)
    {
        if (n % 2 == 1)
        {
            cout << 7;
            n -= 3;
        }
        else
        {
            cout << 1;
            n -= 2;
        }
    }
    if (n == 2)
    {
        cout << 1;
    }

    return 0;
}