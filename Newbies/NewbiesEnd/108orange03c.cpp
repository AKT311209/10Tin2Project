#include <bits/stdc++.h>

using namespace std;

unordered_map<long long, long long> devisors;

void getDevisors(long long n)
{
    // Get all prime factors of n
    for (long long i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            devisors[i]++;
            n /= i;
        }
    }
    if (n > 1)
        devisors[n]++;
}

long long pow3(long long n) {
    long long res = 1;
    while (res < n) {
        res *= 3;
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long x;
    cin >> x;

    getDevisors(x);
    long long maxFreq = 0;
    for (auto item : devisors)
    {
        maxFreq = max(maxFreq, item.second);
    }
    long long b = pow3(maxFreq);
    
    long long count = 0;
    for (auto item : devisors)
    {
        if (item.second < b)
        {
            count++;
            break;
        }
    }

    while (b > 1)
    {
        b /= 3;
        count++;
    }

    long long base = 1;
    for (auto item : devisors)
    {
        base *= item.first;
    }

    cout << base << " " << count;
}
