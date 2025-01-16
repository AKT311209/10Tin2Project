#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n, k;
    cin >> n >> k;
    long long num, cnt = 0;
    for (long long i = 0; i < n; ++i)
    {
        cin >> num;
        num = abs(num);
        long long prod = 1;
        if (num == 0)
        {
            prod = 0;
        }
        else
        {
            while (num > 0)
            {
                long long digit = num % 10;
                prod *= digit;
                if (prod == 0)
                    break;
                num /= 10;
            }
        }
        long long digits = 0;
        if (prod == 0)
        {
            digits = 1;
        }
        else
        {
            while (prod > 0)
            {
                digits++;
                prod /= 10;
            }
        }
        if (digits >= k)
        {
            cnt++;
        }
    }
    cout << cnt << "\n";
}