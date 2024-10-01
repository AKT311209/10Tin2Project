#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Calculate fibonacci series
    int n;
    cin >> n;
    int a = 0, b = 1;
    cout << a << " " << b << " "; // 0 1
    for (int i = 2; i < n; i++)
    {
        int c = a + b; // 0 + 1 = 1
        cout << c << " "; // 1
        a = b;
        b = c;
    }
    
}
