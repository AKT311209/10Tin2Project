#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long temp = n;
    long long sum = 0;
    while (temp > 0)
    {
        sum += temp % 10;
        temp /= 10;
    }
    cout << (n%sum==0 ? "YES" : "NO");
}
