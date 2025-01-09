#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long N;
    cin >> N;
    
    long long A;
    long long low = 1, high = 2000000;
    while (low < high)
    {
        long long mid = low + (high - low) / 2;
        long long val = mid * (mid + 1) * (2 * mid + 1) / 6;
        if (val >= N)
            high = mid;
        else
            low = mid + 1;
    }
    A = low;

    long long prevGroup = A;
    prevGroup--;
    long long prevGrouplasti = prevGroup * (prevGroup + 1) * (2 * prevGroup + 1) / 6;
    long long diff = N - prevGrouplasti;
    long long prevGrouplast = (A - 1) * A / 2;

    long long res = prevGrouplast + (diff - 1) / A + 1;
    cout << res;
}