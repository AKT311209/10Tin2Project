#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i+=2)
    {
        cout << arr[i] << " ";
    }
    cout << '\n';
    for (int i = 2; i <= n; i+=2)
    {
        cout << arr[i] << " ";
    }
}