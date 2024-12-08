#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("maxa.inp", "r")) {
        freopen("maxa.inp", "r", stdin);
        freopen("maxa.out", "w", stdout);
    }
    long long n;
    cin >> n;

    vector <long long> arr(n);

    long long max = -1;
    long long secondMax = -1;

    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }
    if (secondMax == -1) secondMax = max;
    cout << secondMax%max;
}