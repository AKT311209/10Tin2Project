#include <bits/stdc++.h>

using namespace std;

int main() {
    string x;
    cin >> x;

    string comp = "";
    for (char _ : x) comp+=x[0];
    string res = "";
    if (stoll(comp) > stoll(x)) res = comp;
    else if (count(x.begin(), x.end(), '9') != x.size()) {
        for (char _ : x) res+=char(x[0]+1);
    } else {
        for (size_t i = 1; i <= x.size()+1; i++) {
            res+="1";
        }
    }

    cout << stoll(res) - stoll(x);    
}