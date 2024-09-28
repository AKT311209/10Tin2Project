#include <bits/stdc++.h>

using namespace std;

int main()
{
    int position, a, b, c;
    cin >> position >> a >> b >> c;
    unsigned long long salary;
    salary = 0;

    // Base salary
    switch (position)
    {
    case 1:
        salary += 20000000;
        break;
    case 2:
        salary += 15000000;
        break;
    case 3:
        salary += 5000000;
        break;
    default:
        break;
    }
    // Bonus
    if (90 <= c && c <= 100)
    {
        salary += salary / 10;
    }
    else if (70 <= c && c < 90)
    {
        salary += salary / 20;
    }
    // Working hours
    if (position == 1 && a > 160)
    {
        salary += (a - 160) * 200000;
    }

    // Seniority
    if (position != 3)
    {
        if (1 <= b && b < 5)
        {
            salary += 2000000;
        }
        else if (b > 5)
        {
            salary += 5000000;
        }
    }
    cout << salary;
}
