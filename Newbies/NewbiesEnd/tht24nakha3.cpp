#include <bits/stdc++.h>

using namespace std;

long long rotatenum(long long num, long long step) {
    return (num+step)%10;
}
    

int main() {
    string s;
    long long k;

    cin >> s >> k;

    for (long long i = 0; i < s.size(); i++) {
        s[i] = rotatenum(s[i]-'0', k)+'0';
    }

    cout << s;
}