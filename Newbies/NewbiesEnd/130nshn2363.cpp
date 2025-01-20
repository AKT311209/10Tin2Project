#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long queries;
    queries = 3;
    while (queries--)
    {
        long long x, y, k;
        cin >> x >> y >> k;

        cout << (x % 2 == y % 2 ? "Bob" : "Andy") << '\n';
    }
}