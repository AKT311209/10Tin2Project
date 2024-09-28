#include <bits/stdc++.h>

using namespace std;

int main()
{
   int a, b, c ,d;
   cin >> a >> b >> c >> d;
   if (a==c || b==d || b==c || a==d) {
      cout << 1;
   } else {
      cout << 0;
   }
}
