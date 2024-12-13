// C++ code
#include <bits/stdc++.h>

using namespace std;

int main()
{
    if (fopen("harmony.inp", "r"))
    {
        freopen("harmony.inp", "r", stdin);
        freopen("harmony.out", "w", stdout);
    }

    long long n;
    cin >> n;

    unordered_map<long long, long long> map;
    vector <long long> a(n);

    for (auto &x : a)
    {
        cin >> x;
    }

    long long res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (map[a[i] - a[j]]) {
                res++;
                break;
            }
        }
        for (int j = 0; j <= i; j++) {
            map[a[i] + a[j]] = 1;
        }
    }

    cout << res;
}