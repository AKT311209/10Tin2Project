#include <bits/stdc++.h>
using namespace std;
char a;
int num;
int main()
{
    cin >> a >> num;
    char a1 = toupper(a);
    int a2 = ((a1+num)-65)%26+65;
    cout << (char)a2;
}
