#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    int res=0;

    res+= 1*(b>=a && b>=c)+1*(c>=b && c>=d)+1*(d>=c && d>=e)+1*(a>=b && a>=c)+1*(e>=d && e>=c);

    cout << res;
}
