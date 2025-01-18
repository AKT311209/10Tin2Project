#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    if (n%2) {
        cout << (n+1)/2 << "\n";
    } else {
        cout << n/2+2 << "\n";
    }
}