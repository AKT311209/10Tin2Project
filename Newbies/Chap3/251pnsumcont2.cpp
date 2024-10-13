#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    bool found = false;
    for (int start = 1; start <= n; ++start) {
        int sum = 0;
        for (int num = start; sum < n; ++num) {
            sum += num;
            if (sum == n) {
                for (int i = start; i <= num; ++i) {
                    cout << i << " ";
                }
                found = true;
                break;
            }
        }
        if (found) break;
    }

    return 0;
}