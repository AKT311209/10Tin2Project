#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    int arr[26] = {0};

    for (char c : s)
    {
        arr[c - 'a']++;
    }

    for (int i = 0; i < q; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            char src, tgt;
            cin >> src >> tgt;
            if (src != tgt)
            {
                arr[tgt - 'a'] += arr[src - 'a'];
                arr[src - 'a'] = 0;
            }
        }
        else
        {
            char c;
            cin >> c;
            cout << arr[c - 'a'] << "\n";
        }
    }
    return 0;
}
