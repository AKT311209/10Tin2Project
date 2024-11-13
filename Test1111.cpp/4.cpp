#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long res1, res2, res3, res4;
    res1 = (n+1)*n/2;
    res2 = n*n;
    res3 = 2*(n*n+(n*(n-1))/2)-(2*n-1);
    res4 = 2*(n*n+(n*(n-1)))+(3*n-2)*(n-2);
    
    cout << res1 << '\n';
    cout << res2 << '\n';
    cout << res3 << '\n';
    cout << res4;

}