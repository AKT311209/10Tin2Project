#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    string c = a+b;
    reverse(c.begin(), c.end());
    cout << stoi(c);
}
