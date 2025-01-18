#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;

    long long rev = n + 1 - k;
    if (rev % 2 == 1) {
        cout << (rev + 1) / 2;
    } else {
        cout << n - (rev - 1) / 2;
    }
}