#include <bits/stdc++.h>

using namespace std;

vector <long long> a;

int main() {
    long long n;
    cin >> n;

    long long s;
    while (cin >> s) {
        a.push_back(s);
    }

    for (long long i = 1; i <= n; i++) {
        if (find(a.begin(), a.end(), i) == a.end()) {
            cout << "LOSE";
            return 0;
        }
    }
    cout << "WIN";
    return 0;
}