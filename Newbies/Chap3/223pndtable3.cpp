#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int num = 1;
    for (int i = 1; i <= n; i++)
    {   
        num = i;
        for (int j = i; j <= 2*i-1; j++)
            cout << num++ << " ";
        cout << '\n';
    }
}