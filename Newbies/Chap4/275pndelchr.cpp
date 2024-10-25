#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, result = "";
    while(cin>>s)
    {
        for (size_t i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
        }
        result += s;
        result += ' ';
    }
    result[0] = toupper(result[0]);
    cout << result;
}