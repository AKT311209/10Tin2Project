#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int k;
    cin >> k >> s;
    string res;
    for(char digit: s){
        while(!res.empty() && res.back() < digit && k > 0) {
            res.pop_back();
            k--;
        }
        res += digit;
    }
    while(k > 0 && !res.empty()){
        res.pop_back();
        k--;
    }
    cout << stoll(res);
}