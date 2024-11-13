#include <bits/stdc++.h>

using namespace std;

int calcdays(int month, int year)
{
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    case 0:
    case 13:
        return 31;
        break;
    case 2:
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            return 29;
        }
        else
        {
            return 28;
        }
        break;

    default:
        return 30;
        break;
    }
}

int main()
{
    int d, m, y, k, n;
    int res1, res2;
    cin >> d >> m >> y >> k;

    k -= 1;
    n = calcdays(m - 1, y);
    res1 = ((k - n % 7) + 7) % 7 + 1;
    n = calcdays(m, y);
    res2 = (k + n % 7)%7 + 1;
    res1+=7*(res1==1);
    res2+=7*(res2==1);
    res1-=7*(res1==9);
    res2-=7*(res2==9);

    cout << res1 << ' ';
    cout << res2;
}