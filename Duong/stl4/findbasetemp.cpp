#include <bits/stdc++.h>
using namespace std;
map<long long, long long> mp;
long long n;
const long long mx= 1e18;
void snt(){
    for(long long a=2;a<=1000000;a++){
        long long q=a*a*a;
        while(1){
            if(!mp[q]) mp[q]=a;
            if(q>mx/a) break;
            q*=a;
        }
    }
}
void solve(){
    long long res=n;
    if(mp[n]) res=mp[n];
    else{
        long long  k=sqrt(n);
        if(k*k==n) res=k;
    }
    cout<< res<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if (fopen("findbase.inp", "r"))
    {
        freopen("findbase.inp", "r", stdin);
        freopen("findbase.out", "w", stdout);
    }
    snt();
    long long t;
    cin >> t;
    while (t--) {
        cin >> n;
        solve();
    }
    return 0;
}