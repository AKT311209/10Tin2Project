#include <bits/stdc++.h>

using namespace std;

int main() {
    long long N;
    cin >> N;
    N/=1000;
    cout << max((N-45)/19, 0LL);
}