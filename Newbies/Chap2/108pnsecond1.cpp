#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int largest = max(max(a, b), max(c, d));
    int smallest = min(min(a, b), min(c, d));

    int sum = a+b+c+d;
    long double avgmiddle = (long double)(sum-(largest+smallest))/2;

    int secondSmallest = a*(smallest<a && a<avgmiddle)+b*(smallest<b && b<avgmiddle)+c*(smallest<c && c<avgmiddle)+d*(smallest<d && d<avgmiddle);
    int secondLargest = sum-largest-smallest-secondSmallest;

    cout  << secondSmallest << '\n';
    cout << secondLargest << '\n';

}
