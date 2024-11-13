#include <bits/stdc++.h>

using namespace std;

int main()
{
    if (fopen("string2.inp", "r"))
    {
        freopen("string2.inp", "r", stdin);
        freopen("string2.out", "w", stdout);
    }
    string s;
    cin >> s;
    for (int i = 0; i < 10; i++)
    {
        cout << count(s.begin(), s.end(), i + '0') << '\n';
    }
}