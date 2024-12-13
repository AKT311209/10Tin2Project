#include <bits/stdc++.h>

using namespace std;

vector <vector <long long>> a;

int main() {
    long long n;
    cin >> n;

    long long s;
    while (cin >> s) {
        auto it = find_if(a.begin(), a.end(), [s](const vector<long long>& v) { return !v.empty() && v[0] == s; });
        if (it == a.end()) {
            vector <long long> b;
            b.push_back(s);
            a.push_back(b);
        } else {
            it->push_back(s);
        }
    }

    long long sum = 0;
    for (auto v : a) {
        sum += v.size() * (v.size() - 1) / 2;
    }
    cout << sum;
}