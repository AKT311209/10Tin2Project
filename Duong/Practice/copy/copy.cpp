#include <bits/stdc++.h>
using namespace std;

bool checkpalin(string s)
{
    int N = s.size();
    for (int i = 0; i < N / 2; i++)
    {
        if (s[i] != s[N - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    int N = s.size();
    long long total = 1LL * N * (N - 1) / 2 + 1;

    long long palin = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = i+1; j < N; j++)
        {
            if (checkpalin(s.substr(i, j - i + 1)))
            {
                palin++;
            }
        }
    }
    cout << total - palin;
    return 0;
}