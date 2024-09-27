#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    if (a=="blue" && b=="bluegreen") {
        cout << "Login successfully";
    } else if (a!="blue") {
        cout << "Username is incorrect";
    } else {
        cout << "Password is incorrect";
    }
}
