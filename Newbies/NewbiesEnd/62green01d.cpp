#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    for (long long i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s.erase(unique(s.begin(), s.end()), s.end());
        if (s.find("bruhm") != string::npos)
        {
            cout << 1 << "\n";
        }
        else
        {
            cout << 0 << "\n";
        }
    }
}