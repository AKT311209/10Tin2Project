#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
        a[i] -= k;
    }

    unordered_map<long long, long long> pmap;
    pmap[0] = 0;
    long long presum = 0;
    long long max = 0;
    long long start = 0;

    for(long long i = 1; i <= n; ++i){
        presum += a[i-1];
        if(pmap.find(presum) != pmap.end()){
            long long len = i - pmap[presum];
            if(len > max){
                max = len;
                start = pmap[presum] + 1;
            }
        }
        else{
            pmap[presum] = i;
        }
    }

    if(max == 0){
        cout << "0";
    }
    else{
        cout << start << " " << max;
    }
}