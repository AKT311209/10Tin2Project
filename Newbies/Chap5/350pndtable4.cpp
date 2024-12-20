#include <bits/stdc++.h>

using namespace std;

long long array[1005][1005];
int main() {
    long long n;
    cin >> n;

    long long num = 0;
    for (long long i = n; i >= 1; i--) {
        for (long long j = n; j >= 1; j--) {
            num++;
            cout << n*n+1-num << " ";
        }
        cout << '\n';
    }

    return 0;
}