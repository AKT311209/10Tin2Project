#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;
    long long p = 1;
    for (int i = a; i <= b; i++)
    {
        p = (p * i) % c;
    }
    cout << p;
}