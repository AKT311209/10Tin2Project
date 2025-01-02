#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;
    long long count_T = count(s.begin(), s.end(), 'T');
    long long count_A = count(s.begin(), s.end(), 'A');
    long long count_V = count(s.begin(), s.end(), 'V');
    

    string res;
    for (int i = 1; i <= count_T; i++) {
        res.push_back('T');
    }
    for (int i = 1; i <= count_V; i++) {
        res.push_back('V');
    }
    for (int i = 1; i <= count_A; i++) {
        res.push_back('A');
    }

    cout << res;
}