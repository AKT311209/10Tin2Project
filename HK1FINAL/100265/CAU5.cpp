#include <bits/stdc++.h>

using namespace std;

int main()
{
    if (fopen("CAU5.inp", "r"))
    {
        freopen("CAU5.inp", "r", stdin);
        freopen("CAU5.out", "w", stdout);
    }
    long long n;
    cin >> n;
    vector<string> s(n + 1);
    cin.ignore();
    for (int i = 1; i <= n; i++)
    {
        getline(cin, s[i]);
    }
    unordered_map<string, long long> m;
    for (int i = 1; i <= n; i++)
    {
        bool start = true;
        string temp = "";
        for (int j = 0; j < s[i].size(); j++)
        {
            if (start && s[i][j] == ' ')
            {
                continue;
            }
            else if (start && s[i][j] != ' ')
            {
                start = false;
                temp += s[i][j];
            }
            else if (!start && s[i][j] != ' ')
            {
                temp += s[i][j];
            }
            else
            {
                m[temp]++;
                break;
            }
        }
    }
    vector <pair<long long, string>> v;
    for (auto i : m)
    {
        v.push_back({i.second, i.first});
    }
    sort(v.begin(), v.end(), [](pair<long long, string> a, pair<long long, string> b) {
        if (a.first == b.first)
        {
            return a.second < b.second;
        }
        return a.first > b.first;
    });
    cout << v[0].second;
}