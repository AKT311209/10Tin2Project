#include <bits/stdc++.h>

using namespace std;

stack<long long> st;

int main() {
    if (fopen("overload.inp", "r")) {
        freopen("overload.inp", "r", stdin);
        freopen("overload.out", "w", stdout);
    }

    long long n, m;
    cin >> n >> m;
    vector<long long> a(n);
    for (auto &x : a)
        cin >> x;
    vector<long long> b(m);
    for (auto &x : b)
        cin >> x;

    vector<long long> res(n, -1);
    long long j = m - 1;
    for (long long i = n - 1; i >= 0; i--) {
        while (j >= 0 && a[i] <= b[j]) {
            st.push(j);
            j--;
        }
        if (!st.empty()) {
            res[i] = st.top() + 1;
            st.pop();
        }
    }

    for (auto &x : res)
        cout << x << '\n';
    return 0;
}