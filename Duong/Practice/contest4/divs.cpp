#include <bits/stdc++.h>

using namespace std;

const long long maxN = 4e4 + 5;
long long divs[maxN];

void countdivs()
{
    for (long long i = 1; i < maxN; i++)
    {
        for (long long j = i; j < maxN; j += i)
        {
            divs[j]++;
        }
    }
}

struct PairHash {             // Hash function for pair
    size_t operator()(const pair<long long,long long>& p) const {
        auto h1 = hash<long long>()(p.first);
        auto h2 = hash<long long>()(p.second);
        return h1 ^ (h2 + 0x9e3779b97f4a7c15ULL + (h1 << 6) + (h1 >> 2));
    }
};

auto simpfrac(long long a, long long b) {
    long long g = __gcd(a, b);
    a /= g;
    b /= g;
    if (b < 0) {
        a = -a;
        b = -b;
    }
    return make_pair(a, b);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    countdivs();
    long long n, k;
    cin >> n >> k;
    unordered_map<pair<long long, long long>, long long, PairHash> freq;
    long long count = 0;

    for (long long num = 1; num <= n; num++)
    {
        auto fraction1 = simpfrac(k * divs[num], num);
        freq[fraction1]++;
        auto fraction2 = simpfrac(num, divs[num]);
        if (freq.find(fraction2) != freq.end())
        {
            count += freq[fraction2];
        }
    }
    cout << count;
}