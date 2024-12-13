#include <bits/stdc++.h>

using namespace std;

vector <long long> input;
vector <long long> output;

int main() {
    long long n;
    cin >> n;

    while (cin >> n) {
        input.push_back(n);
    }

    for (long long i: input) {
        if (find(output.begin(), output.end(), i) == output.end()) {
            output.push_back(i);
        }
    }

    for (long long i: output) {
        cout << i << " ";
    }
}