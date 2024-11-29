#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("exam.inp", "r")) {
        freopen("exam.inp", "r", stdin);
        freopen("exam.out", "w", stdout);
    }
    long long n, c;
    cin >> n >> c;
    vector <pair <long long, long long>> arr;

    for (long long i = 0; i < n; i++) {
        long long x, y;
        cin >> x >> y;
        arr.push_back(make_pair(x, y));
    }
    sort(arr.begin(), arr.end());
    long long count = 0;
    for (int i = 0; i < n; i++) {
        if (c<arr[i].first) {
            break;
        } else {
            c += arr[i].second;
            count++;
        }
    }
    cout << count;
}