#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("mmseg.inp", "r")) {
        freopen("mmseg.inp", "r", stdin);
        freopen("mmseg.out", "w", stdout);
    }

    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long min = *min_element(a.begin(), a.end());
    long long max = *max_element(a.begin(), a.end());
    vector<long long> min_pos;
    vector<long long> max_pos;
    for (long long i = 0; i < n; i++) {
        if (a[i] == min) {
            min_pos.push_back(i);
        }
        if (a[i] == max) {
            max_pos.push_back(i);
        }
    }
    long long distance = LLONG_MAX;
    for (long long i = 0; i < min_pos.size(); i++) {
        for (long long j = 0; j < max_pos.size(); j++) {
            if (abs(min_pos[i] - max_pos[j]) +1 < distance) {
                distance = abs(min_pos[i] - max_pos[j]) +1;
            }
        }
    }
    cout << distance;
}