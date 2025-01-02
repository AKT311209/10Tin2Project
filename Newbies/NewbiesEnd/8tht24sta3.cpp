#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    // Largest
    string mx;
    long long leftover = n;
    if (leftover % 2 != 0) {
        mx.push_back('7');
        leftover -= 3;
    }
    while (leftover > 0) {
        mx.push_back('1');
        leftover -= 2;
    }

    const int cost[10] = {6,2,5,5,4,5,6,3,7,6}; // matches for digits 0-9

    // Build smallest number with DP
    vector<int> dp(n+1, 1e9), from(n+1,-1), dig(n+1,-1);
    dp[0] = 0;
    for(int i=0;i<=n;i++){
        if(dp[i] == 1e9) continue;
        for(int d=0; d<10; d++){
            if(i==0 && d==0 && n>6) continue; // avoid leading zero for multi-digit
            int nxt = i + cost[d];
            if(nxt<=n && dp[i]+1 < dp[nxt]){
                dp[nxt] = dp[i]+1; 
                from[nxt] = i; 
                dig[nxt] = d;
            }
        }
    }
    string mn;
    for(int x=n;x>0;x=from[x]) mn.push_back(char('0'+dig[x]));
    reverse(mn.begin(), mn.end());

    cout << mn << '\n' << mx;
    return 0;
}