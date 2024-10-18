#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("new.inp", "r")) {
        freopen("new.inp", "r", stdin);
        freopen("new.out", "w", stdout);
    }

    long long n, a, b;
    cin >> n >> a >> b;
    long long sum = 0;
    long long temp = n;
    while (temp <= (a+b)) {
        long long start = max(temp-max(a, b), 0LL);
        long long end = min({temp, a, b});
        long long numcases = end - start + 1;
        sum += numcases;
        temp+=n;
    }
    cout << sum;
}