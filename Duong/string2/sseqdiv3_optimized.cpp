#include <bits/stdc++.h>
using namespace std;

int main() {
    if (fopen("sseqdiv3.inp", "r")) {
        freopen("sseqdiv3.inp", "r", stdin);
        freopen("sseqdiv3.out", "w", stdout);
    }
    
    string s;
    cin >> s;
    
    long long count = 0;
    vector<long long> freq(3, 0);
    freq[0] = 1;
    int prefix = 0;
    
    for(char c : s){
        prefix = (prefix + (c - '0')) % 3;
        count += freq[prefix];
        freq[prefix]++;
    }
    
    cout << count;
}