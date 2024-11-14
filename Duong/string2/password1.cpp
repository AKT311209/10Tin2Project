#include <bits/stdc++.h>

using namespace std;

array <int, 100001> prime;

void sieve() {
    prime.fill(1);
    prime[0] = prime[1] = 0;
    for (int i = 2; i * i <= 100000; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= 100000; j += i) {
                prime[j] = 0;
            }
        }
    }
}

int main() {
    if (fopen("password1.inp", "r")) {
        freopen("password1.inp", "r", stdin);
        freopen("password1.out", "w", stdout);
    }
    sieve();
    string s;
    cin >> s;
    vector <int> primenums;
    for (int i = 0; i <= 100000; i++) {
        if (prime[i]) {
            primenums.push_back(i);
        }
    }
    sort(primenums.begin(), primenums.end(), greater<int>());
    for (int num : primenums) {
        if (s.find(to_string(num)) != string::npos) {
            cout << to_string(num);
            return 0;
        }
    }
}