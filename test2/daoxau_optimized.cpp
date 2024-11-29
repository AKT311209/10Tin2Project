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
    int n = s.size();
    s = " " + s;
    string left = s.substr(1, (n+1) / 2);
    string right = s.substr((n+1)/2+1, n / 2);
    vector<bool> a(left.size(), 0);
    
    long long repeats;
    cin >> repeats;

    for (long long i = 1; i<= repeats; i++) {
        long long m;
        cin >> m;
        m = n-m+1;
        
    }
}