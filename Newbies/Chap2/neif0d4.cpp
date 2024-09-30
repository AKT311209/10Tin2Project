#include <bits/stdc++.h>

using namespace std;

int calc_day_in_month(int month, int year)
{
        switch (month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:   
        return 31;
        break;
    case 2:
        if ((year%4==0 && year%100!=0) || (year%400==0)) {
            return 29;
        } else {
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
    int d, m, y, k;
    cin >> d >> m >> y >> k;
    int d1, m1, y1, k1;

    // Find previous day
    if (d==1 && m!=1) {
        d1 = calc_day_in_month(m-1, y);
        m1 = m-1; y1 = y;
    } else if (d==1)
    {
        d1 = 31;
        m1= 12;
        y1 = y-1;
    } else {
        d1 = d-1; m1 = m; y1 = y;
    }
    k1 = k-1+7*(k==2);
    cout << d1 << ' ' << m1 << ' ' << y1 << ' ' << k1 << '\n';

    // Find following day
    if (d==calc_day_in_month(m, y) && m!=12) {
        d = 1;
        m = m+1;
    } else if (d==calc_day_in_month(m, y))
    {
        d = 1;
        m= 1;
        y = y+1;
    } else {
        d = d+1;
    }
    k = k+1-7*(k==9);
    cout << d << ' ' << m << ' ' << y << ' ' << k << '\n';
}
