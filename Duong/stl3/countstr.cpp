#include <bits/stdc++.h>
using namespace std;

int main()
{
    if (fopen("countstr.inp", "r"))
    {
        freopen("countstr.inp", "r", stdin);
        freopen("countstr.out", "w", stdout);
    }

    long long n, k;
    cin >> n >> k;

    vector<int> len(n);
    for (auto &s : len)
    {
        string temp;
        cin >> temp;
        s = temp.length();
    }

    long long count = 0;
    int freq[21] = {0};

    for (long long i = 0; i < n; ++i)
    {
        if (i > k)
        {
            freq[len[i - k - 1]]--;
        }
        count += freq[len[i]];
        freq[len[i]]++;
    }

    cout << count;
}