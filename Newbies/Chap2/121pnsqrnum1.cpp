#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (int(round(sqrt(n)))*int(round(sqrt(n)))==n) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
