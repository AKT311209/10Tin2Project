#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long A, L, R;
    cin >> A >> L >> R;

    string Astring = to_string(A);
    string Bstring = Astring;
    reverse(Bstring.begin(), Bstring.end());

    string AB = Astring + Bstring;
    int len = AB.length();

    long long sum_AB = 0;
    for (char c : AB)
        sum_AB += (c - '0');

    long long total_length = R - L + 1;
    long long cycle = total_length / len;
    long long remaining = total_length % len;

    long long res = cycle * sum_AB;

    for (int i = 0; i < remaining; i++)
    {
        long long pos = L + cycle * len + i;
        long long id = (pos - 1) % len;
        res += (AB[id] - '0');
    }

    cout << res;
}