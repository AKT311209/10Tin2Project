#include <bits/stdc++.h>

using namespace std;

int main() {
    long long N;
    cin >> N;

    long long num = (N-1)/9;
    cout << num*(num+1)/2*9;
}