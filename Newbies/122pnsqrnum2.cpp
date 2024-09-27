#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (int(round(sqrt(n)))*int(round(sqrt(n)))==n) {
        cout << (int(sqrt(n))+1)*(int((sqrt(n)))+1);
    } else {
        cout << (int((sqrt(n)))+2)*(int((sqrt(n)))+2);
    }
}
