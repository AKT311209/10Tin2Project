#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int largest = max(max(a, b), max(c, d));
    int smallest = min(min(a, b), min(c, d));

    int secondSmallest = INT_MAX;
    int secondLargest = INT_MIN;

    // Find second smallest
    if (a != smallest) secondSmallest = min(secondSmallest, a);
    if (b != smallest) secondSmallest = min(secondSmallest, b);
    if (c != smallest) secondSmallest = min(secondSmallest, c);
    if (d != smallest) secondSmallest = min(secondSmallest, d);

    // Find second largest
    if (a != largest) secondLargest = max(secondLargest, a);
    if (b != largest) secondLargest = max(secondLargest, b);
    if (c != largest) secondLargest = max(secondLargest, c);
    if (d != largest) secondLargest = max(secondLargest, d);

    cout << secondSmallest << '\n';
    cout << secondLargest << '\n';

    return 0;
}
