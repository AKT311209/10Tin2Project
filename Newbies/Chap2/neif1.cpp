#include <bits/stdc++.h>

using namespace std;

int main() {
    long long a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    long long a1 = max(a, max(b, c));
    long long c1 = min(a, min(b, c));
    long long b1 = a+b+c-a1-c1;
    long long d1 = max(d, max(e, f));
    long long f1 = min(d, min(e, f));
    long long e1 = d+e+f-d1-f1;

    if (a1==d1 && b1==e1 && c1==f1) {
        double p = (double)(a+b+c)/2;
        cout << fixed << setprecision(2) << sqrt(p*(p-a1)*(p-b1)*(p-c1))*2;
    } else {
        cout << -1;
    }
}
