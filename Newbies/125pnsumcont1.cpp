#include <bits/stdc++.h>

using namespace std;

int main()
{
   long long a;
   cin >> a;
   // 1+2+...+n=n*(n+1)/2
   a*=2;
   // Test a = n*n+1
   long long b = floor(sqrt(a));
   if (b*(b+1)==a) {
    cout << "YES";
   } else {
    cout << "NO";
   }
}
