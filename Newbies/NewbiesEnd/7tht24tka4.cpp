#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long N, A, B, C;
    cin >> N >> A >> B >> C;

    // Maximum liters using plastic bottles
    long long ans = N / A;

    // Maximum liters using glass bottles
    if (N >= B) {
        long long i = max(0LL, (N - B) / (B - C))+1;
        long long leftover = N - i * (B - C);
        if (leftover < 0) {
            i--;
            leftover = N - i * (B - C);
        }
        ans = max(ans, i + leftover / A);
    }

    cout << ans;
}