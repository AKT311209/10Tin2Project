#include <bits/stdc++.h>
using namespace std;
char a;
int main()
{
    cin >> a;
    char a1 = tolower(a);
    int a2 = a1-1;
    if ((char)a2 == '`') {
        cout << 'z';
    } else {
    cout << (char)a2;
    }
}
