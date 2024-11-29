#include <bits/stdc++.h>

using namespace std;

int main() {
    string n1, n2;
    cin >> n1 >> n2;

    if (n1.size() < n2.size()) {
        cout << '<';
    } else if (n1.size() > n2.size()) {
        cout << '>';
    } else {
        for (size_t i = 0; i < n1.size(); i++) {
            if (n1[i] < n2[i]) {
                cout << '<';
                return 0;
            } else if (n1[i] > n2[i]) {
                cout << '>';
                return 0;
            }
        }
        cout << '=';
    }
}
