#include <bits/stdc++.h>

using namespace std;


int main() {
    long long a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int res = (a-b)*(a-b)*(a-c)*(a-d)*(a-e)*(b-c)*(b-d)*(b-e)*(c-d)*(c-e)*(d-e);
    cout << (res==0 ? "NO":"YES" );
}
