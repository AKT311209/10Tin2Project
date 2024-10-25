#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    s1 = " " + s1;
    s2 = " " + s2;
    long long rep;
    cin >> rep;
    for (long long i = 1; i <= rep; i++)
    {
        int x;
        cin >> x;
        cout << (s1[x] == s2[x] ? "YES" : "NO") << '\n';
    }
}