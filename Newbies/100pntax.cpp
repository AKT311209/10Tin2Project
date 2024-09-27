#include <bits/stdc++.h>

using namespace std;

int main() {
    long double  y, x;
    cin >> x >> y;
    int l;
    long long tn = (long long)(x*1000000-11*1000000-4400000*y);
    if (tn <=5*1000000) {
        l = 1;
        tn =   5*tn/100;
    } else if (5*1000000<tn && tn<=10*1000000)
    {
        l = 2;
        tn =   tn*10/100-0.25*1000000;
    } else if (10*1000000<tn && tn<=18*1000000)
    {
        l = 3;
        tn =   tn*15/100-0.75*1000000;
    } else if (18*1000000<tn && tn <=32*1000000)
    {
        l = 4;
        tn =   tn*20/100-1.65*1000000;
    } else if (32*1000000<tn && tn <=52*1000000)
    {
        l = 5;
        tn =   tn*25/100-3.25*1000000;
    } else if (52*1000000<tn && tn <=80*1000000)
    {
        l = 6;
        tn =   tn*30/100-5.85*1000000;
    } else {
        l = 7;
        tn =   tn/100*35-9850000;
    }
    if (tn<0) {
        cout << "1" << " " << "0";
    } else {
        cout <<  l << " " << (long long)(tn); 
    }  
}
