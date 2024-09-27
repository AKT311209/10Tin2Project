#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a1, a2, b1, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    double x = (double)(b2-b1)/(a1-a2);
    double y = (double)(a1*x+b1);
    cout << fixed << setprecision(6) << x << ' ' << y;

}
