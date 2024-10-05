#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, x;
    cin >> n;
    long long count = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x <= 0) continue;
        long long temp = x;
        long long sum = 0;
        while (temp > 0)
        {
            sum += temp % 10;
            temp /= 10;
        }
        if (x % sum == 0)
        {
            count++;
        }
    }
    cout << count;
}


