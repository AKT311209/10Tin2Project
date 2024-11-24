#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("arn.inp", "r")) {
        freopen("arn.inp", "r", stdin);
        freopen("arn.out", "w", stdout);
    }

    string s, find;
    cin >> s >> find;
    int count = 0;
    auto it = s.begin();
    while ((it = search(it, s.end(), find.begin(), find.end())) != s.end()) {
        count++;
        it += find.size();
    }
    cout << count;
}