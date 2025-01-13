#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long x, y;
    cin >> x >> y;

    long long query;
    cin >> query;
    long long vertical = 0;
    long long horizontal = 0;

    for (int i = 0; i < query; i++)
    {
        string dir;
        cin >> dir;
        if (dir == "UP")
        {
            long long move;
            cin >> move;
            vertical += move;
        }
        else if (dir == "DOWN")
        {
            long long move;
            cin >> move;
            vertical -= move;
        }
        else if (dir == "LEFT")
        {
            long long move;
            cin >> move;
            horizontal -= move;
        }
        else if (dir == "RIGHT")
        {
            long long move;
            cin >> move;
            horizontal += move;
        }
    }
    cout << fixed << setprecision(2) << sqrt(horizontal * horizontal + vertical * vertical) << "\n";
}