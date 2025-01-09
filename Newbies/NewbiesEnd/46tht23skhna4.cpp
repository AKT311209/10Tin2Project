#include <bits/stdc++.h>

using namespace std;

int main() {
    long long N;
    cin >> N;

    string s = "TINHOCTRE";

    long long pos = N*(N-1)/2 +1;
    cout << s[(pos-1)%9];
}