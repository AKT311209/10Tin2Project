#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("tongbp.inp", "r"))
    {
        freopen("tongbp.inp", "r", stdin);
        freopen("tongbp.out", "w", stdout);
    }
    long long repeats, n;
    cin >> repeats;
    for (int i = 0; i<repeats; i++) {
        cin >> n;
        cout << n*(n+1)*(2*n+1)/6 << '\n';
    }
    return 0;
}