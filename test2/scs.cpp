#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    if (fopen("scs.inp", "r")) {
        freopen("scs.inp", "r", stdin);
        freopen("scs.out", "w", stdout);
    }    

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string n;
    cin >> n;
    sort(n.begin(), n.end());
    if (n[0] == '0') {
        for (size_t i = 1; i < n.length(); i++) {
            if (n[i] != '0') {
                swap(n[0], n[i]);
                break;
            }
        }
    }
    cout << n << '\n';
    sort(n.begin(), n.end(), greater<char>());
    cout << n;
}