#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long N;
    cin >> N;
    long long T = ceil(sqrt(2 * N));
    while (T * (T + 1) >= 2 * N) {
        T--;
    }
    T++;
    cout << T;
}