#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int res[n + 1];
    res[n] = arr[n];
    for (int i = n - 1; i >= 1; i--)
    {
        res[i] = res[i + 1] + arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cout << res[i] << " ";
    }
}