#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;

    vector<long long> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    
    long long maxLen = 0;
    for (long long mid = 1; mid <= n; mid++) {
        // Odd length
        {
            long long dist = 0;
            while (mid - dist >= 1 && mid + dist <= n && a[mid - dist] == a[mid + dist]) {
                dist++;
            }
            maxLen = max(maxLen, 2LL * dist - 1LL);
        }
    
        // Even length
        {
            long long dist = 0;
            while (mid - dist >= 1 && (mid + dist + 1) <= n && a[mid - dist] == a[mid + dist + 1]) {
                dist++;
            }
            maxLen = max(maxLen, 2LL * dist);
        }
    }
    
    cout << maxLen;
}