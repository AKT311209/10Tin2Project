#include <bits/stdc++.h>

using namespace std;

int main() {
    if (
        fopen("ahv.inp", "r")) {
        freopen("ahv.inp", "r", stdin);
        freopen("ahv.out", "w", stdout);
    }

    long long n;
    cin >> n;

    vector <vector <long long>> arr;
    arr.resize(1000000);

    for (long long i = 1; i <= n; i++) {
        long long x;
        cin >> x;
        arr[x].push_back(i);
    }

    vector <long long> res(1000000);
    long long temp = n;

    for (long long i = 1; i <= n; i++) {
        for (auto p : arr[i]) {
            res[p] = temp;
            temp --;
        }
    }

    for (long long i = 1; i <= n; i++) {
        cout << res[i] << " ";
    }
}