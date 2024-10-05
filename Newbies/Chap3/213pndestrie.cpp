#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    for (int i = 1; i <= n-1; i++)
    {
        cout << '*';
        for (int j = 1; j <= i-2; j++)
        {
            cout << ' ';
        }
        if (i > 1) cout << '*';
        cout << '\n';
    }
    for (int i = 1; i <= n; i++)
    {
        cout << '*';
    }
}