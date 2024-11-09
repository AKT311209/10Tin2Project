#include <bits/stdc++.h>

using namespace std;

int main() {
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