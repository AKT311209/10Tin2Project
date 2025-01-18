#include <bits/stdc++.h>

using namespace std;

int main() {  
    long long t1, x1, y1, s1;
    long long t2, x2, y2, s2;
    
    cin >> t1 >> x1 >> y1 >> s1;
    double tkhanh1 = (double)s1 / x1 + t1;
    double tnam1 = (double)s1 / y1;
    if (abs(tkhanh1 - tnam1) < 1e-9)
        cout << "Fare\n";
    else if (tkhanh1 < tnam1)
        cout << "Khanh\n";
    else
        cout << "Nam\n";
    
    cin >> t2 >> x2 >> y2 >> s2;
    double tkhanh2 = (double)s2 / x2 + t2;
    double tnam2 = (double)s2 / y2;
    if (abs(tkhanh2 - tnam2) < 1e-9)
        cout << "Fare\n";
    else if (tkhanh2 < tnam2)
        cout << "Khanh\n";
    else
        cout << "Nam\n";
}