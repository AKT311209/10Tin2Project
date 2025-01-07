#include <bits/stdc++.h>

using namespace std;

long long sum_odds(long long K)
{
    long long n = (K + 1) / 2;
    return n * n;
}

long long sum_evens(long long K, long long N)
{
    long long start = ((K + 2) / 2) * 2;
    if (start > N)
        return 0;
    long long last = N / 2 * 2;
    if (start > last)
        return 0;
    long long count = (last - start) / 2 + 1;
    return count * (start + last) / 2;
}

int main()
{
    long long N;
    cin >> N;
    long long left = 1, right = N, res = -1;
    while (left <= right)
    {
        long long mid = left + (right - left) / 2;
        long long sumodd = sum_odds(mid);
        long long sumeven = sum_evens(mid, N);
        if (sumodd > sumeven)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    res = left;
    cout << res;
    return 0;
}