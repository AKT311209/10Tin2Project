#include <bits/stdc++.h>
using namespace std;
char a;
int main()
{
    cin >> a;
    int r =a;
    if (r-97+1<0) {
        cout << r-65;
    } else {
        cout << r-97;
    }
}
