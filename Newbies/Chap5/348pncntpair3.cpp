#include <bits/stdc++.h>

using namespace std;

vector <long long> input;

int main() {
    long long n, x;
    cin >> n >> x;
    
    long long in;
    while(cin >> in) {
        input.push_back(in);
    }

    vector <long long> count(x + 1, 0);
    for (auto i : input) {
        count[i]++;
    }

    long long sum = 0;
    for (long long i = 0; i <= x/2; i++) {
        if (i == x - i) {
            sum += count[i] * (count[i] - 1) / 2;
        } else {
            sum += count[i] * count[x - i];
        }
    }
    cout << sum;
}