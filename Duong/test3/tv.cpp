#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    if (fopen("tv.inp", "r")) {
        freopen("tv.inp", "r", stdin);
        freopen("tv.out", "w", stdout);
    }
    long long n;
    cin >> n;
    vector<pair<long long, long long>> inte(n);
    for(auto &p : inte) cin >> p.first >> p.second;

    sort(inte.begin(), inte.end());

    long long confl = 0;
    priority_queue<long long, vector<long long>, std::greater<long long>> ends;

    for(auto &p : inte){
        while(!ends.empty() && ends.top() <= p.first){
            ends.pop();
        }
        confl += ends.size();
        ends.push(p.second);
    }
    cout << confl;
}