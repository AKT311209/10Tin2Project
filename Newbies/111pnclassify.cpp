#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
     if (a+b+c>=12) {
        if (a>4 && b>4 && c>4) {
            cout << "Gioi";
        } else
        {
            cout << "Trung binh";
        }
        
     } else
     {
        cout << "Truot";
     }
}
