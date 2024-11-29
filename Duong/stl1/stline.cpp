#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("stline.inp", "r")) {
        freopen("stline.inp", "r", stdin);
        freopen("stline.out", "w", stdout);
    }

    long long n;
    vector <pair <long long, long long>> arr;
    
    cin >> n;
    for (long long i = 0; i < n; i++) {
        long long x, y;
        cin >> x >> y;
        arr.push_back(make_pair(x, y));
    }
    int count = 0;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n-1; i++) {
        if (arr[i+1].first < arr[i].second) {
            count++;
            arr.erase(arr.begin() + i+1);
            n--;
            i--;
        }
    }
    cout << count;
}