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
    for (int i = 1; i <= (n+1)/2; i++)
    {
        if (arr[i] != arr[n-i+1])
        {
            cout << arr[i] << " " << arr[n-i+1] << " ";
        }
        else
        {
            cout << arr[i] << " ";
        }
    }
        
}