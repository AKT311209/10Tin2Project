#include <bits/stdc++.h>

using namespace std;

int main() {
    string N;
    long long K;
    cin >> N;
    cin >> K;

    long long sum = 0;
    for (unsigned long long i = 0; i < N.size(); i+=2) {
        sum += N[i] - '0';
        if (sum >= K) {
            cout << N[i+1];
            return 0;
        }
    }
}