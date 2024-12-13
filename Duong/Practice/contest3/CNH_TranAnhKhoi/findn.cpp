#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    vector<long long> pow2(60, 1);
    for (int i = 1; i < 60; ++i)
    {
        pow2[i] = pow2[i - 1] * 2;
    }

    while (T--)
    {
        long long N;
        cin >> N;
        int L = 1;
        long long total = 2;
        while (N > total)
        {
            L++;
            total += pow2[L];
        }
        long long prev = total - pow2[L];
        long long offset = N - prev - 1;
        string binary = "";
        for (int i = 0; i < L; i++)
        {
            binary = to_string(offset % 2) + binary;
            offset /= 2;
        }
        string number = "";
        for (char c : binary)
        {
            if (c == '0')
                number += '4';
            else
                number += '7';
        }
        cout << number << "\n";
    }
    return 0;
}