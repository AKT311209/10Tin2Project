#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    cin >> k;
    reverse(arr + 1, arr + n + 1);
    rotate(arr + 1, arr + (n-k) + 1, arr + n + 1);
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
}