#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long query;
    cin >> query;
    while (query--)
    {
        string s;
        cin >> s;
        string pattern[6] = {"ABC", "ACB", "BAC", "BCA", "CAB", "CBA"};
        vector<long long> seq(6);
        for (long long i = 0; i < 6; i++)
            seq[i] = i;

        bool foundAll = false;
        do
        {
            long long start = 0, cnt = 0;
            for (long long i = 0; i < 6; i++)
            {
                auto pos = s.find(pattern[seq[i]], start);
                if (pos == string::npos)
                    break;
                cnt++;
                start = pos + 3;
            }
            if (cnt == 6)
            {
                foundAll = true;
                break;
            }
        } while (next_permutation(seq.begin(), seq.end()));
        cout << (foundAll ? "YES" : "NO") << '\n';
    }

    return 0;
}