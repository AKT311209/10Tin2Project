#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, x;
    cin >> n;
    long long count = 0;
    for (long long i = 1; i <= n; i++)
    {
        cin >> x;
        if (int(round(sqrt(x))) * int(round(sqrt(x))) == x)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}