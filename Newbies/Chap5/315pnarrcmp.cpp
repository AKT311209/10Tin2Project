#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n + 1];
    int arr1[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> arr1[i];
    }
    sort(arr + 1, arr + n + 1);
    sort(arr1 + 1, arr1 + n + 1);
    if (equal(arr + 1, arr + n + 1, arr1 + 1)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}