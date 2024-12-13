#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    if (fopen("cpair11.inp", "r"))
    {
        freopen("cpair11.inp", "r", stdin);
        freopen("cpair11.out", "w", stdout);
    }

    long long n;
    cin >> n;

    vector<long long> array(n);
    vector<long long> freq(12, 0);
    for (auto &num : array)
    {
        cin >> num;
        freq[(num * num)% 11]++;
    }

    long long count = 0;
    for (long long i = 0; i < 11; ++i)
        count += freq[i] * (freq[i] - 1) / 2;
    cout << count;
}