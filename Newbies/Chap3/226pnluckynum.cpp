#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long temp, count = 0;
    for (long long i = 1; i <= n; i++) {
        temp = i;
        int flag = 0;
        while(true) {
            if (temp == 0) break;
            if (temp%10 != 6 && temp%10 != 8) {
                flag = 1;
                break;
            }
            temp /= 10;
        }
        if (flag == 0) count++;
    }
    cout << count << '\n';
}


