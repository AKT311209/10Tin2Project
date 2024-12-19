#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("mk.inp", "r")) {
        freopen("mk.inp", "r", stdin);
        freopen("mk.out", "w", stdout);
    }

    int N;
    cin >> N;
    vector<string> passwords(N);
    for(auto &s : passwords) cin >> s;

    long long count = 0;
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            if(i != j && passwords[j].find(passwords[i]) != string::npos){
                count++;
            }
        }
    }
    cout << count;
}