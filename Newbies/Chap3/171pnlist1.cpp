#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    cout << x;
    for (int i = 1; i <= n-1; i++)
    {
        cin >> x;
        cout << "*" << x;
    }
    return 0;
}