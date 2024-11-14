#include <bits/stdc++.h>

using namespace std;

int main()
{
    if (fopen("per30.inp", "r"))
    {
        freopen("per30.inp", "r", stdin);
        freopen("per30.out", "w", stdout);
    }
    string num;
    cin >> num;
    long long sum = 0;
    for (char c : num)
    {
        sum += c - '0';
    }
    if (sum % 3 != 0 || num.find('0') == string::npos)
    {
        cout << -1;
        return 0;
    }
    sort(num.begin(), num.end(), greater<char>());
    cout << num;
}