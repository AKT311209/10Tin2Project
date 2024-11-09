#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 1000001;
array <bool, MAX_N> prime;

void sieve() {
    prime.fill(true);
    prime[0] = prime[1] = false;
    for (int p = 2; p * p < MAX_N; p++) {
        if (prime[p]) {
            for (int i = p * p; i < MAX_N; i += p) {
                prime[i] = false;
            }
        }
    }
}
int main() {
    if (fopen("knt.inp", "r")) {
        freopen("knt.inp", "r", stdin);
        freopen("knt.out", "w", stdout);
    }
    sieve();

    int repeats, k, input;
    vector<int> arr(repeats);
    cin >> repeats;
    for (int i = 0; i < repeats; i++) {
        cin >> k;
        if (prime[k]) 

}