#include <bits/stdc++.h>

using namespace std;

int main() {
    char x;
    cin >> x;
    
    char line1 = 'a' + ('z' - x);
    char line2 = (x-1)*(x!='a')+'z'*(x=='a');
    char line3 = (x-'a'+2)%26+'a';
    
    cout << line1 << '\n';
    cout << line2 << '\n';
    cout << line3 << '\n';


}
