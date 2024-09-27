#include <bits/stdc++.h>

using namespace std;

int main()
{
   if (fopen("banh.inp", "r"))
   {
      freopen("banh.inp", "r", stdin);
      freopen("banh.out", "w", stdout);
   }
   long long n, m, k;
   cin >> n >> m >> k;
   long long s = n * m;
   long long b = k * m*4/5;
   if (n >= k)
   {
      cout << s * 4 / 5;
   }
   else if (b < s)
   {
      cout << b;
   }
   else
   {
      cout << s;
   }
}
