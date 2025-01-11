#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;

    long long count5 = 0;
    long long count10 = 0;
    long long available = 0;
    for (long long i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        if (x == 5)
        {
            count5++;
            available++;
        }
        else if (x == 10)
        {
            if (count5 > 0)
            {
                count5--;
                count10++;
                available++;
            }
            else
            {
                cout << available;
                return 0;
            }
        }
        else
        { // 20
            if (count10 > 0 && count5 > 0)
            {
                count10--;
                count5--;
                available++;
            }
            else if (count5 >= 3)
            {
                count5 -= 3;
                available++;
            }
            else
            {
                cout << available;
                return 0;
            }
        }
    }
}