#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int min = *min_element(arr + 1, arr + n + 1);
    int max = *max_element(arr + 1, arr + n + 1);
    cout << min << ' ' << max << '\n';

    vector<int> posmin;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == min)
        {
            posmin.push_back(i);
        }
    }

    vector<int> posmax;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == max)
        {
            posmax.push_back(i);
        }
    }
    
    for (int pos: posmin) {
        cout << pos << ' ';
    }
    cout << '\n';
    for (int pos: posmax) {
        cout << pos << ' ';
    }
    
}