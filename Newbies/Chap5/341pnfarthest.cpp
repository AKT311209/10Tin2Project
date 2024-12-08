#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long a[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    long long resj[n + 1];
    long long resk[n + 1];

    for (int i = 1; i <= n; i++)
    {
        int res = 0;
        for (int j = i; j >= 1; j--)
        {
            if (a[j] >= a[i])
            {
                res = j;
            }
            else
            {
                break;
            }
        }
        resj[i] = res;

        res = 0;
        for (int k = i; k <= n; k++)
        {
            if (a[k] >= a[i])
            {
                res = k;
            }
            else
            {
                break;
            }
        }
        resk[i] = res;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << resj[i] << " ";
    }

    cout << '\n';

    for (int i = 1; i <= n; i++)
    {
        cout << resk[i] << " ";
    }
}