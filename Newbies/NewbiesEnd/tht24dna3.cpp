#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s;
    cin >> s1 >> s;
    s = " " + s;
    size_t cur = 0;
    size_t prev = 0;
    if (s.find(s1) == string::npos)
    {
        cout << 0;
        return 0;
    }
    else
    {
        while (s.find(s1, cur) != string::npos)
        {
            prev = cur;
            cur++;
            cur = s.find(s1, cur);
        }
    }
    cout << prev;
    return 0;
}