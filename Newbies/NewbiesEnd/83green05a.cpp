#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;

    double side = (double)n/3;
    cout << fixed << setprecision(3) << side * side * sqrt(3) / 4 << "\n";
}