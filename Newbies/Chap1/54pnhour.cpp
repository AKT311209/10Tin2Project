#include <bits/stdc++.h>
using namespace std;
int main()
{
    int seconds;
    cin >> seconds;
    int hours = seconds / 3600;
    seconds %= 3600;
    int minutes = seconds / 60;
    seconds %= 60;
    cout << setw(2) << setfill('0') << hours << ":" <<
           setw(2) << setfill('0') << minutes << ":" <<
           setw(2) << setfill('0') << seconds;
}
