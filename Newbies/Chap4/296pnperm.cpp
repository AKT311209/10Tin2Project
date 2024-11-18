#include <bits/stdc++.h>
using namespace std;

long long factorial(int n) {
    long long res = 1;
    for(int i = 1; i <= n; ++i)
        res *= i;
    return res;
}

int main() {
    string s;
    cin >> s;
    long long perm = factorial(s.length());

    for (int i = 97 ; i <= 122; i++) {
        int count = 0;
        for (char c : s) {
            if (c == i) {
                count++;
            }
        }
        perm /= factorial(count);
    }

    cout << perm;
}