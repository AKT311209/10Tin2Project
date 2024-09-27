#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    cout << (a/x + b/y)*(a%x + b%y==0)+(a/x+b/y+1)*(a%x+b%y==a%x)*(a%x + b%y!=0)+(a/x+b/y+1)*(a%x+b%y==b%y)*(a%x + b%y!=0)+(a/x + b/y+2)*(a%x+b%y>=1)*(a%x+b%y!=a%x)*(a%x+b%y!=b%y);
}
