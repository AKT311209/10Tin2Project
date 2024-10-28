#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    for (size_t i = 0; i < s.size()*2+1; i++) {
        cout << s.substr(0, (long long)s.size()- abs((long long)((long long)s.size()-(long long)i))) << '\n';
    }

}