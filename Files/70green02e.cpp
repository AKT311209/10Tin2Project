#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long query;
    cin >> query;

    for (int i = 0; i < query; i++)
    {
        string s;
        cin >> s;

        unordered_map<char, int> freq;
        for (char c : s)
        {
            freq[c]++;
        }

        int odd = 0;
        for (auto p : freq)
        {
            if (p.second % 2)
            {
                odd++;
            }
        }

        cout << (odd <= 1 ? "YES" : "NO") << "\n";
    }
}