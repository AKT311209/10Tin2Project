#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a;
    cin >> a;
    switch (a)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: cout << 31;
        break;
        case 2:
        cout << 29;

    default:
        cout << 30;
        break;
    }
}
