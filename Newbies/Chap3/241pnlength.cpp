#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, x, y, prevx, prevy;
    double distance, sum;
    cin >> n;
    cin >> prevx >> prevy;
    sum = 0;
    for (int i = 1; i < n; i++)
    {
        cin >> x >> y;
        distance = (double)sqrt((x - prevx) * (x - prevx) + (y - prevy) * (y - prevy));
        sum += distance;
        prevx = x;
        prevy = y;
    }
    cout << fixed << setprecision(6) << sum;
    return 0;
}
