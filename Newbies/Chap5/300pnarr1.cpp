#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    cin >> k;
    cout << arr[k];
}