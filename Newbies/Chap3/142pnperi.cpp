#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n, x, y, prevx, prevy;
    double distance, sum;
    cin >> n;
    cin >> prevx >> prevy;
    double firstx = prevx, firsty = prevy;
    sum = 0;
    for (int i = 1; i < n; i++)
    {
        cin >> x >> y;
        distance = (double)sqrt((x - prevx) * (x - prevx) + (y - prevy) * (y - prevy));
        sum += distance;
        prevx = x;
        prevy = y;
    }
    distance = (double)sqrt((firstx - prevx) * (firstx - prevx) + (firsty - prevy) * (firsty - prevy));
    sum += distance;
    cout << fixed << setprecision(6) << sum << '\n';
    return 0;
}
