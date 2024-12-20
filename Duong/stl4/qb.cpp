#include <bits/stdc++.h>

using namespace std;

stack<int> pile;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    if (fopen("qb.inp", "r"))
    {
        freopen("qb.inp", "r", stdin);
        freopen("qb.out", "w", stdout);
    }
    int repeats;
    cin >> repeats;

    for (int i = 1; i <= repeats; i++)
    {
        int cur;
        cin >> cur;
        if (!pile.empty() && (pile.top() - cur)%2 == 0)
        {
            pile.pop();
        }
        else
        {
            pile.push(cur);
        }
    }
    cout << pile.size();
}