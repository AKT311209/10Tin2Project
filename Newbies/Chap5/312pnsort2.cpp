#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n + 2];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    arr[n + 1] = k;
    sort(arr + 1, arr + n + 2, greater<int>());
    for (int i = 1; i <= n + 1; i++)
    {
        cout << arr[i] << " ";
    }
}
