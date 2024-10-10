#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m;
    cin >> m;
    int remainder = 1;
    int count = 1;
    while (remainder != 0)
    {
        remainder = (remainder * 10 + 1) % m;
        count++;
    }
    cout << count << '\n';
}
