#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    if (fopen("CAU4.inp", "r")) {
        freopen("CAU4.inp", "r", stdin);
        freopen("CAU4.out", "w", stdout);
    }

    long long n;
    cin >> n;
    vector <tuple<long long, long long, long long, long long, long long>> v;
    for (long long i = 0; i < n; i++) {
        long long T, V, A;
        cin >> T >> V >> A;
        long long S = T + V + A;
        v.push_back({S, T, V, A, i+1});
    }

    sort(v.begin(), v.end(), [](tuple<long long, long long, long long, long long, long long> a, tuple<long long, long long, long long, long long, long long> b) {
        if (get<0>(a) == get<0>(b)) {
            if (get<1>(a) == get<1>(b)) {
                if (get<3>(a) == get<3>(b)) {
                    return get<2>(a) > get<2>(b);
                }
                return get<3>(a) > get<3>(b);
            }
            return get<1>(a) > get<1>(b);
        }
        return get<0>(a) > get<0>(b);
    });

    vector <long long> v2(n+1);
    for (long long i = 1; i <= n; i++) {
        v2[get<4>(v[i-1])] = i;
    }
    for (long long i = 1; i <= n; i++) {
        cout << v2[i] << " ";
    }

}