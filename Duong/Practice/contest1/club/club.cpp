#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    if (fopen("club.inp", "r"))
    {
        freopen("club.inp", "r", stdin);
        freopen("club.out", "w", stdout);
    }

    string s, t;
    cin >> s >> t;
    long long freq1[26];
    long long freq2[26];

    for (char c = 'A'; c <= 'Z'; c++)
    {
        int num = int(c) - 65;
        freq1[num] = count(s.begin(), s.end(), c);
        freq2[num] = count(t.begin(), t.end(), c);
    }

    long long repeats;
    cin >> repeats;
    for (int i = 1; i <= repeats; i++)
    {
        char x;
        cin >> x;
        int num = int(x) - 65;
        if (freq1[num] > freq2[num])
        {
            cout << 1;
        }
        else if (freq1[num] < freq2[num])
        {
            cout << 2;
        }
        else
        {
            cout << 3;
        }
        cout << '\n';
    }
}
