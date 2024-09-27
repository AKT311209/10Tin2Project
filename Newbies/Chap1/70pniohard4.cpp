#include <bits/stdc++.h>

using namespace std;

int main() {
    char x;
    int i;
    cin >> x >> i;
    int line1 =(x-'a'-i);
    char line2 = (line1%26+26)%26+'a';
    char line3 = 'a' + ('z' - line2);
    char line4 = (line3-'a'+i)%26+'a';
    
    cout << line4;


}
