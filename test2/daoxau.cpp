#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    if (fopen("daoxau.inp", "r"))
    {
        freopen("daoxau.inp", "r", stdin);
        freopen("daoxau.out", "w", stdout);
    }

    string s;
    cin >> s;
    long long repeats;
    cin >> repeats;

    for (long long i = 1; i<= repeats; i++) {
        long long m;
        cin >> m;
        reverse(s.end() - m, s.begin()+m);
    }
    cout << s;
}