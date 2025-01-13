#include <bits/stdc++.h>

using namespace std;

int main()
{
    double h, m, s;
    cin >> h >> m >> s;

    double result;
    result = 0;
    m += s / 60.0;
    h += m / 60.0;
    result += h * 30;
    result =  min(abs(m * 6 - result), 360-abs(m * 6 - result));

    cout << fixed << setprecision(4) << result;
}
