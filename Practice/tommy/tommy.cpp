#include <bits/stdc++.h>

using namespace std;

vector<long long> given;
bool sieve[20000001];

void sieve_run()
{
    memset(sieve, true, sizeof(sieve));
    sieve[0] = false;
    sieve[1] = false;
    for (long long i = 2; i * i <= 20000000; i++)
    {
        if (sieve[i] == true)
        {
            for (long long j = i * i; j <= 20000000; j += i)
            {
                sieve[j] = false;
            }
        }
    }
}

long long count_mul(long long x)
{
    long long count = 0;
    for (long long i = 0; i < given.size(); i++)
    {
        if (given[i] % x == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin >> n;
    sieve_run();
    for (long long i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        given.push_back(x);
    }

    long long sum = 0;
    long long repeats;
    cin >> repeats;

    vector <long long> prefix;
    prefix.push_back(0);
    for (long long i = 1; i <= 20000001; i++)
    {
        if (sieve[i] == false) prefix.push_back(prefix.back());
        else prefix.push_back(prefix.back() + count_mul(i));
    }
    for (long long i = 0; i < repeats; i++)
    {
        long long l, r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l - 1] << '\n';
    }
}