#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    int x, y;
    cin >> x >> y;
    cout << count_if(arr + 1, arr + n + 1, [x, y](int a) { return a >= x && a <= y; });
}