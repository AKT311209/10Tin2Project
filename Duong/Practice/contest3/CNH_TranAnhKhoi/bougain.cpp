#include <bits/stdc++.h>
using namespace std;

int max_pots(const string S)
{
    int n = S.length();
    map<pair<char, char>, int> dp;
    dp[make_pair(-1, -1)] = 0;
    for (int i = 0; i < n; ++i)
    {
        char current = S[i];
        map<pair<char, char>, int> newdp;
        for (auto &[key, val] : dp)
        {
            pair<char, char> last = key;
            if (newdp.find(last) == newdp.end() || newdp[last] < val)
            {
                newdp[last] = val;
            }
            if (current != last.first && (last.first == -1 || current != last.second))
            {
                pair<char, char> new_key = make_pair(current, last.first);
                if (newdp.find(new_key) == newdp.end() || newdp[new_key] < val + 1)
                {
                    newdp[new_key] = val + 1;
                }
            }
        }
        dp = newdp;
    }
    int result = 0;
    for (auto &[key, val] : dp)
    {
        result = max(result, val);
    }
    return result;
}

int main()
{
    string S;
    cin >> S;
    cout << max_pots(S);
}