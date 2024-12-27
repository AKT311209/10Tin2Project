#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long num = k/(n+1);
    if (num*(n+1)+num+1<=k) {
        num++;
        num*=2;
    } else {
        num++;
        num*=2;
        num--;
    }

    if (num>n) {
        cout << 0;
    } else {
        cout << num;
    }
}