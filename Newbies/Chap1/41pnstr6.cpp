#include <bits/stdc++.h>
using namespace std;
int main()
{
    string in, in1;
    cin >> in >> in1;
    int i1 = in.size()+in1.size();
    int i2 = abs((int)(in.size()-in1.size()));
    string in2 = in1;
    reverse(in2.begin(), in2.end());
    string i3 = in + in2;
    string i4 = string(1, in.at(0)) + string(1, in1.at(0))+string(1, in1.back())+string(1, in.back());
    string s1in = in.substr(0, in.length()/2);
    string s2in = in.substr(in.length()/2, in.length()-1);
    string s1in1 = in1.substr(0, in1.length()/2);
    string s2in1 = in1.substr(in1.length()/2, in1.length()-1);
    reverse(s1in1.begin(), s1in1.end());
    reverse(s2in.begin(), s2in.end());
    string i5 = s1in + s2in1 + s1in1 +s2in;
    cout << i1 << '\n'; 
    cout << i2 << '\n'; 
    cout << i3 << '\n'; 
    cout << i4 << '\n'; 
    cout << i5;
}
