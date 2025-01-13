#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int last = s.size();
    s = "#" + s + "#";
    int maxdis = 0;
    for (int mid = 1; mid <= last; mid++)
    {
        int dis = 1;
        while (s[mid - dis] != '#' && s[mid + dis] != '#')
        {
            if (s[mid - dis] == s[mid + dis] && isupper(s[mid - dis]) == isupper(s[mid + dis]) && isupper(s[mid - dis]) != isupper(s[mid - dis + 1]))
            {
                dis++;
            }
            else
            {
                break;
            }
        }
        maxdis = max(maxdis, dis);
    }
    cout << maxdis * 2 - 1 << '\n';
}
