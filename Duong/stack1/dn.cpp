#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("dn.inp", "r")) {
        freopen("dn.inp", "r", stdin);
        freopen("dn.out", "w", stdout);
    }
    string s;
    stack <size_t> st;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            st.push(i);
        } else if (s[i] == ')') {
            cout << st.top() << " ";
            st.pop();
        }
    }
}