#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    int compare[n + 1];
    copy(arr + 1, arr + n + 1, compare + 1);
    reverse(compare + 1, compare + n + 1);
    if (equal(arr + 1, arr + n + 1, compare + 1)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}