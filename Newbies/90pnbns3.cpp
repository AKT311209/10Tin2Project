#include <bits/stdc++.h>

using namespace std;

int main() {
    int num1, num2, num3, num4, num5;
    int count = 0;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    if (num1 == num2) {
        count++;
    }
    if (num1 == num3) {
        count++;
    }
    if (num1 == num4) {
        count++;
    }
    if (num1 == num5) {
        count++;
    }
    if (num2 == num3) {
        count++;
    }
    if (num2 == num4) {
        count++;
    }
    if (num2 == num5) {
        count++;
    }
    if (num3 == num4) {
        count++;
    }
    if (num3 == num5) {
        count++;
    }
    if (num4 == num5) {
        count++;
    }
    if (count == 4 || count == 3) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }

    return 0;
}
