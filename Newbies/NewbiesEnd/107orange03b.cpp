#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;
    long long a[n];

    long long count = 0;
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    unordered_map<long long, long long> freq;

    for (long long i = 0; i < n; i++)
    {
        if (freq.find(a[i] + i) != freq.end()) {
            count += freq[a[i] + i];
        }
        freq[a[i] + i]++;
    }

    cout << count << "\n";
}