#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= 2*n; i+=2) {
        for (int j = 1; j <= i; j++) {
            cout << '*';
        }
        cout << '\n';
    }
    for (int i = 1; i <= 2*n+1; i++) {
        cout << '*';
    }
    cout << '\n';
    for (int i = 2*n-1; i >= 1; i-=2) {
        for (int j = 1; j <= i; j++) {
            cout << '*';
        }
        cout << '\n';
    }
}