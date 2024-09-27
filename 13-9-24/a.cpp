#include <iostream>

using namespace std;

int main() {
    int d, m, y, k;
    cin >> d >> m >> y >> k;

    // 1. Number of days in month
    int daysInM;
    if (m == 2) {
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
            daysInM = 29; // Leap year
        } else {
            daysInM = 28;
        }
    } else if (m == 4 || m == 6 || m == 9 || m == 11) {
        daysInM = 30;
    } else {
        daysInM = 31;
    }
    cout << "1. Number of days in month: " << daysInM << endl;

    // Function to calculate the day of the week (Zeller's Congruence)
    auto dayOfWeek = [](int d, int m, int y) {
        if (m < 3) {
            m += 12;
            y--;
        }
        int k = y % 100;
        int j = y / 100;
        int f = d + 13 * (m + 1) / 5 + k + k / 4 + j / 4 + 5 * j;
        return (f % 7) + 1; // 1=Saturday, 2=Sunday, ..., 7=Friday
    };

    // 2. First Monday of the month
    int firstMon;
    for (int i = 1; i <= 7; i++) {
        if (dayOfWeek(i, m, y) == 3) { // 3 = Monday
            firstMon = i;
            break;
        }
    }
    cout << "2. First Monday of the month: " << firstMon << endl;

    // 3. Last Sunday of the month
    int lastSun;
    for (int i = daysInM; i > daysInM - 7; i--) {
        if (dayOfWeek(i, m, y) == 2) { // 2 = Sunday
            lastSun = i;
            break;
        }
    }
    cout << "3. Last Sunday of the month: " << lastSun << endl;

    // 4. Day of the week of 1st of the month
    int firstDayOfWeek = dayOfWeek(1, m, y);
    cout << "4. Day of the week of 1st day of the month: ";
    if (firstDayOfWeek == 2) cout << "Sunday";
    else if (firstDayOfWeek == 3) cout << "Monday";
    else if (firstDayOfWeek == 4) cout << "Tuesday";
    else if (firstDayOfWeek == 5) cout << "Wednesday";
    else if (firstDayOfWeek == 6) cout << "Thursday";
    else if (firstDayOfWeek == 7) cout << "Friday";
    else cout << "Saturday";
    cout << endl;

    // 5. Day of the week of the last day of the month
    int lastDayOfWeek = dayOfWeek(daysInM, m, y);
    cout << "5. Day of the week of the last day of the month: ";
    if (lastDayOfWeek == 2) cout << "Sunday";
    else if (lastDayOfWeek == 3) cout << "Monday";
    else if (lastDayOfWeek == 4) cout << "Tuesday";
    else if (lastDayOfWeek == 5) cout << "Wednesday";
    else if (lastDayOfWeek == 6) cout << "Thursday";
    else if (lastDayOfWeek == 7) cout << "Friday";
    else cout << "Saturday";
    cout << endl;

    return 0;
}
