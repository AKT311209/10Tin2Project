#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, temp, prev = 10;
    cin >> n;

    while (n>0)
    {
        temp = n % 10;
        if (temp > prev) {
            cout << "NO";
            return 0;
        }
        prev = temp;
        n /= 10;
    }
    cout << "YES";
    
}