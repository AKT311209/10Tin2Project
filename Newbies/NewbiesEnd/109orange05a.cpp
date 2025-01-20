#include <bits/stdc++.h>
using namespace std;

bool isLeap(long long year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main()
{
    long long d, m, y, k;
    cin >> d >> m >> y >> k;

    int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeap(y))
        monthDays[1] = 29;

    long long total = d;
    for (int i = 0; i < m - 1; i++)
        total += monthDays[i];

    long long jan1 = (k - ((total - 1) % 7) + 7) % 7;
    if (jan1 == 0)
        jan1 = 7;

    long long daysInYear = isLeap(y) ? 366 : 365;
    long long dec31 = (jan1 + daysInYear - 1) % 7;
    if (dec31 == 0)
        dec31 = 7;

    jan1 += 7*(jan1 == 1);
    dec31 += 7*(dec31 == 1);

    cout << jan1 << " " << dec31;
}