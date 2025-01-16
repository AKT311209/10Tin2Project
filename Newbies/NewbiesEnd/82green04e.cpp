#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (auto &x : arr)
        cin >> x;
    bool flip = false, reversed = false;
    while (q--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            flip = !flip;
        }
        else if (type == 2)
        {
            reversed = !reversed;
        }
        else if (type == 3)
        {
            int x;
            cin >> x;
            int idx = reversed ? n - x : x - 1;
            int val = arr[idx];
            if (flip)
                val ^= 1; 
            cout << val << "\n";
        }
    }
}