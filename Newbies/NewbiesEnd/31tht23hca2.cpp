#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    reverse(s.begin(), s.end());

    vector <long long> a;
    long long i = 1;
    long long j = 2;
    while (i <= s.size()) {
        a.push_back(i);
        i += j;
        j++;
    }

    string res = "";
    for (long long i: a) {
        res += s[i-1];
    }

    cout << res;
}