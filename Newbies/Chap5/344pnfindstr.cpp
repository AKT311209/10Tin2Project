#include <bits/stdc++.h> 

using namespace std;

int main() {
    long long n, query;
    cin >> n >> query;

    long long code[n];
    string instruction[n];

    for (int i = 0; i < n; i++) {
        cin >> code[i] >> instruction[i];
    }

    for (int i = 0; i < query; i++) {
        long long x;
        cin >> x;
        if (find(code, code + n, x) != code + n) {
            cout << instruction[find(code, code + n, x) - code] << '\n';
        } else {
            cout << "Not found" << '\n';
        }
    }
}