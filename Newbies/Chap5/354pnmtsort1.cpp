#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long m, n;
    cin >> m >> n;

    vector<long long> v;
    long long temp = 0;
    while (cin >> temp)
    {
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    size_t index = 0;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << v[index] << " ";
            index++;
        }
        cout << '\n';
    }
}