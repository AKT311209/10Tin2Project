#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("lineup.inp", "r")) {
        freopen("lineup.inp", "r", stdin);
        freopen("lineup.out", "w", stdout);
    }
    vector <long long> people;
    people.push_back(0);
    long long n;
    cin >> n;

    people.reserve(n);
    for (long long i = 1; i <= n; i++) {
        long long temp;
        cin >> temp;
        people.push_back(temp);
    }

    stack <long long> st;
    for (long long i = 1; i <= n; i++) {
        while (!st.empty() && people[st.top()] <= people[i]) {
            st.pop();
        }
        if (st.empty()) {
            cout << -1 << " ";
        } else {
            cout << st.top()-1 << " ";
        }
        st.push(i);
    }
}