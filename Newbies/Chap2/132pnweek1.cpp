#include <bits/stdc++.h>
using namespace std;

int main() {
    int d, m, y, k;
    cin >> d >> m >> y >> k;
    int day;
    switch (m)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:   
        day = 31;
        break;
    case 2:
        if ((y%4==0 && y%100!=0) || (y%400==0)) {
            day = 29;
        } else {
            day = 28;
        }
        break;
    default:
        day = 30;
        break;
    }
    int firstMon = (d-(k-2)-1)%7+1;
    firstMon+=7*(firstMon<=0);
    int lastSun = (firstMon-1)+28;
    lastSun -=7*(lastSun>day);
    int k1 = ((k-d)%7+8)%7;
    k1+=7*(k1<=1);
    int klast = (k+day-d-1)%7+1;
    klast += 7*(klast==1);
    
    cout << day << '\n';
    cout << firstMon << '\n';
    cout << lastSun << '\n';
    cout << k1 << '\n';
    cout << klast << '\n';

}
