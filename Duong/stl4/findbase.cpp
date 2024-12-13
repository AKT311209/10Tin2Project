#include <bits/stdc++.h>

using namespace std;

map<long long, long long> base;

void prep()
{
    for (long long i = 2; i <= 1000000; i++)
    {
        if (base[i])
            continue;
        for (long long j = i * i; j <= 1000000000000; j *= i)
        {
            base[j] = i;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    if (fopen("findbase.inp", "r"))
    {
        freopen("findbase.inp", "r", stdin);
        freopen("findbase.out", "w", stdout);
    }

}

