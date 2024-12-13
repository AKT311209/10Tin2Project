#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("ritri.inp", "r")) {
        freopen("ritri.inp", "r", stdin);
        freopen("ritri.out", "w", stdout);
    }

    long long n;
    vector<pair<long long, long long>> array;
    cin >> n;
    for (long long i = 0; i < n; ++i) {
        long long x, y;
        cin >> x >> y;
        array.push_back({x, y});
    }

    unordered_map<long long, long long> count_x, count_y;
    for(auto &[x, y] : array){
        count_x[x]++;
        count_y[y]++;
    }

    long long result = 0;
    for(auto &[x, y] : array){
        result += (count_x[x] - 1) * (count_y[y] - 1);
    }

    cout << result;
}