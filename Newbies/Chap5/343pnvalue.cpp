#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long a[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    vector<long long> unique;

    for (int i = 1; i <= n; i++)
    {
        if (find(unique.begin(), unique.end(), a[i]) == unique.end())
        {
            unique.push_back(a[i]);
        }
    }

    long long cnt = 0;
    for (int i = 0; i < unique.size(); i++)
    {
        if (count(a + 1, a + n + 1, unique[i]) >= 2)
        {
            cnt++;
        }
    }
    cout << cnt;
}