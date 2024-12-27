#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    if (fopen("mseq.inp", "r")) {
        freopen("mseq.inp", "r", stdin);
        freopen("mseq.out", "w", stdout);
    }

    long long elements, m;
    cin >> elements >> m;

    vector<long long> a;
    for (long long i = 0; i < elements; i++) {
        long long x;
        cin >> x;
        a.push_back(x);
    }
    unordered_map<long long, long long> remain;

    for (long long num: a) {
        remain[((num % m)+m)%m]++;
    }
    long long count = 0;

    for (auto &p : remain) {
        long long r = p.first;
        long long freqR = p.second;
        if (freqR == 0) continue;

        if (r == 0 || (m % 2 == 0 && r == m / 2)) {
            count++;
            remain[r] = 0;
            continue;
        }

        long long x = (m - r) % m;
        if (!remain.count(x)) {
            count += freqR;
        } else {
            count += max(freqR, remain[x]);
            remain[x] = 0;
        }
        remain[r] = 0;
    }

    cout << count;
}