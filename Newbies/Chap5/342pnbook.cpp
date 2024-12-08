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

    vector<long long> resj;

    for (int i = 1; i <= n; i++)
    {
        if (find(resj.begin(), resj.end(), a[i]) == resj.end())
        {
            resj.push_back(a[i]);
        }
    }
    sort(resj.begin(), resj.end());

    for (int i = 0; i < resj.size(); i++)
    {
        cout << resj[i] << " ";
    }
}