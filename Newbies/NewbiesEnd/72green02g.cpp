#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long res = 0;
    vector <pair <char, long long>> v(n);
    v.push_back({'0', 0});

    for (long long i = 1; i <= n; i++) {
        cin >> v[i].first;
    }

    for (long long i = 1; i <= n; i++) {
        cin >> v[i].second;
    }

    vector <long long> seg;
    for (long long i = 1; i <= n; i++) {
        if (v[i].first == v[i - 1].first) {
            if (seg.size() == 0) seg.push_back(v[i-1].second);
            seg.push_back(v[i].second);
        } else {
            if (seg.size() == 0) continue;
            long long sum = 0;
            for (auto x : seg) {
                sum += x;
            }
            long long maxseg = *max_element(seg.begin(), seg.end());
            res += sum - maxseg;
            seg.clear();
        }
    }
    if (seg.size() != 0) {
        long long sum = 0;
        for (auto x : seg) {
            sum += x;
        }
        long long maxseg = *max_element(seg.begin(), seg.end());
        res += sum - maxseg;
    }
    cout << res;
}