#include <bits/stdc++.h>

using namespace std;


int main() {
    long long K;
    cin >> K;
    int m = 0;
    while (K != 1 && m <= 1000000000) {
        if (K % 6 == 0)
            K /= 6;
        else
            K *= 3;
        m++;
    }
    if (K == 1)
        cout << m;
    else
        cout << -1;
}