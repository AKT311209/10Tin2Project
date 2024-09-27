#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    double p = (double) (a+b+c)/2;
    cout << fixed << setprecision(2) << sqrt(p*(p-a)*(p-b)*(p-c));
}
