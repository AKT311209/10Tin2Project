#include <bits/stdc++.h>

using namespace std;

int main() {
    long long N;
    cin >> N;
    if (N%2) {
        cout << 2+5*(N/2);
    }
    else {
        cout << 3+5*((N-1)/2);
    }
}