#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    while(n>=10) {
        long long sum = 0;
        long long temp = n;
        while(temp) {
            sum += temp%10;
            temp /= 10;
        }
        n = sum;
    }
    cout << n << '\n';
}