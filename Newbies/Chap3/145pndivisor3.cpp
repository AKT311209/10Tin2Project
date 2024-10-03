#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n;
    cin >> n >> m;
    for (int i = n; i >= m; i--)
    {
        if (i % 3 == 0)
        {
            cout << "Fizz";
        }
        if (i % 5 == 0)
        {
            cout << "Buzz";
        }
        if (i % 3 != 0 && i % 5 != 0)
        {
            cout << i;
        }
        cout << ' ';
    }
}
