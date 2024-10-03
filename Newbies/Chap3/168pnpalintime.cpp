#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    while (true)
    {
        b++;
        if (b == 60)
        {
            b = 0;
            a++;
            if (a == 24)
            {
                a = 0;
            }
        }
        int a1 = a / 10, a2 = a % 10;
        int b1 = b / 10, b2 = b % 10;
        if (a1 == b2 && a2 == b1)
        {
            break;
        }
    }
    cout << a << " " << b;
    ;
    return 0;
}
