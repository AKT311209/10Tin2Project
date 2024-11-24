#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin >> n;
    int arr[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int base;
    cin >> base;

    int min = base;
    int max = base;
    int count_break_min = 0;
    int count_break_max = 0;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            count_break_min++;
        }
        if (arr[i] > max)
        {
            max = arr[i];
            count_break_max++;
        }
    }
    cout << count_break_min << ' ' << count_break_max;
}