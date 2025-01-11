#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    string a[n];

    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    unordered_map<char, long long> freq;
    unordered_set<char> mark;

    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < k; j++)
        {
            freq[a[i][j]]++;
        }
    }

    for (char c : a[0])
    {
        bool flag = true;
        for (long long i = 1; i < n; i++)
        {
            if (find(a[i].begin(), a[i].end(), c) == a[i].end())
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            mark.insert(c);
        }
    }

    if (mark.size() == 0)
    {
        cout << -1;
        return 0;
    }

    long long max = LLONG_MIN;
    char maxchar = 1;
    for (char c : mark)
    {
        if (freq[c] > max)
        {
            max = freq[c];
            maxchar = c;
        }
        else if (freq[c] == max && c > maxchar)
        {
            maxchar = c;
        }
    }

    cout << maxchar << ' ' << max;
}