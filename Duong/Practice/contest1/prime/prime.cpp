#include <bits/stdc++.h>

using namespace std;

const int MAX = 1000000;
bool sieve[MAX + 1];
vector<vector<int>> primefact(MAX + 1);

void sieveRun()
{
    memset(sieve, true, sizeof(sieve));
    sieve[0] = sieve[1] = false;
    primefact[0] = primefact[1] = {};
    for (int i = 2; i <= MAX; i++)
    {
        if (sieve[i])
        {
            for (long long j = 1LL * i * i; j <= MAX; j += i)
            {
                sieve[j] = false;
            }
        }
    }
    for (int i = 2; i <= MAX; i++)
    {
        if (sieve[i])
        {
            for (int j = i; j <= MAX; j += i)
            {
                primefact[j].push_back(i);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieveRun();

    long long query;
    cin >> query;

    for (long long q = 0; q < query; q++)
    {
        long long l, r;
        cin >> l >> r;


        map<vector<int>, long long> group_counts;

        for (long long i = l; i <= r; i++)
        {
            sort(primefact[i].begin(), primefact[i].end());
            group_counts[primefact[i]]++;
        }

        long long count = 0;
        for (auto pair : group_counts)
        {
            long long n = pair.second;
            count += n * (n - 1) / 2;
        }

        cout << count << '\n';
    }
}
