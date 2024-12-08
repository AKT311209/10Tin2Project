#include <bits/stdc++.h>
using namespace std;
int main()
{
    if (fopen("stline.inp", "r"))
    {
        freopen("stline.inp", "r", stdin);
        freopen("stline.out", "w", stdout);
    }
    int n;
    cin >> n;
    vector<pair<int, int>> input;
    for (int i = 0; i < n; i++)
    {
        int first, second;
        cin >> first >> second;
        input.push_back({first, second});
    }
    sort(input.begin(), input.end(), [](pair<int, int> a, pair<int, int> b){ return a.second < b.second || (a.second == b.second && a.first < b.first);});
    int end = INT_MIN;
    int count = 0;
    for (auto i : input)
    {
        if (i.first >=end){
            count++;
            end= i.second;
        }
    }
    cout << n-count;
    return 0;
}