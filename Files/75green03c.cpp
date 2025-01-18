#include <bits/stdc++.h>
using namespace std;

long long sumD(const string &x) {
    long long ans = 0;
    for(char c : x) ans += (c - '0');
    return ans;
}

int main(){
    long long n;
    cin >> n;
    
    string s = to_string(n);
    long long bestS = sumD(s);
    long long bestN = n;
    
    for(int i=0; i<(int)s.size(); i++){
        if(s[i] == '0') continue;
        
        string tmp = s;
        tmp[i] = char(tmp[i] - 1);
        for(int j=i+1; j<(int)tmp.size(); j++){
            tmp[j] = '9';
        }
        
        while(tmp.size() > 1 && tmp[0] == '0'){
            tmp.erase(tmp.begin());
        }
        
        long long candVal = stoll(tmp);
        long long candSum = sumD(tmp);
        
        if(candSum > bestS || (candSum == bestS && candVal > bestN)){
            bestS = candSum;
            bestN = candVal;
        }
    }
    
    cout << bestN << "\n";
    return 0;
}