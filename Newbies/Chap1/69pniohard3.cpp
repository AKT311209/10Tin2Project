#include <bits/stdc++.h>

using namespace std;

int main() {
    long long x;
    cin >> x;

    long long y1 = (long long)(sqrt(x));
    long long y2 = (long long)(round((cbrt(x)+0.4)));
    long long y3 = (long long)((long long)cbrt(x)/2*2);
    long long y4 = (long long)((long long)round((sqrt(x)+0.4))/2*2+1);

    long long res1 = y1*y1;
    long long res2 = y2*y2*y2*(y2*y2*y2>=x)+(y2+1)*(y2+1)*(y2+1)*(y2*y2*y2<x);
    long long res3 = y3*y3*y3*(y3*y3*y3<x)+(y3-2)*(y3-2)*(y3-2)*(y3*y3*y3>=x);
    long long res4 = y4*y4*(y4*y4>x)+(y4+2)*(y4+2)*(y4*y4<=x);


    cout << res1 << '\n';
    cout << res2 << '\n';
    cout << res3 << '\n';
    cout << res4 << '\n';
}
