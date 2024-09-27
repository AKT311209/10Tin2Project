#include <bits/stdc++.h>
using namespace std;
int a;
int main()
{
    cin >> a;
    string str = to_string(a);
    cout << stoi(str.substr(2,5)) << '\n';
    cout << stoi(str.substr(0,4)) << '\n';
    cout << stoi(str.substr(3,1)) << '\n';
    cout << setfill('0') << setw(2) << (a/100)%100 << '\n';
}
