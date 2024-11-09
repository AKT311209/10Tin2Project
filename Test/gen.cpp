#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 5000001;
int sumDivisors[MAX_N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if (fopen("gen.inp", "r"))
    {
        freopen("gen.inp", "r", stdin);
        freopen("gen.out", "w", stdout);
    }
    for (int i = 1; i < MAX_N; i++)
    {
        for (int j = i; j < MAX_N; j += i)
        {
            sumDivisors[j] += i;
        }
    }
    int repeat, count = 0;
    cin >> repeat;
    for (int i = 0; i < repeat; i++)
    {
        int n;
        cin >> n;
        if (sumDivisors[n] < 2 * n)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}