#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, r, s, u, v;
    cin >> x >> y >> r >> s >> u >> v;

    int ptsA = 0, ptsB = 0, ptsC = 0;
    // A vs B
    if (x > y)
        ptsA += 3;
    else if (x < y)
        ptsB += 3;
    else
    {
        ptsA++;
        ptsB++;
    }
    // A vs C
    if (r > s)
        ptsA += 3;
    else if (r < s)
        ptsC += 3;
    else
    {
        ptsA++;
        ptsC++;
    }
    // B vs C
    if (u > v)
        ptsB += 3;
    else if (u < v)
        ptsC += 3;
    else
    {
        ptsB++;
        ptsC++;
    }

    vector<pair<int, string>> teams = {{ptsA, "A"}, {ptsB, "B"}, {ptsC, "C"}};
    sort(teams.begin(), teams.end(), greater<pair<int, string>>());
    for (auto t : teams)
        cout << t.second << "\n";
    return 0;
}